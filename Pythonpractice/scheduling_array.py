# -*- coding: utf-8 -*-
import numpy as np

def readprocess_from_txt(): # txt파일 읽기
    i="input-2.txt" # 제출할때 input.txt로 고칠 것
    f=open(i,'r')
    process=list()
    while 1:
        line=f.readline()
        if not line:break # 읽을 줄이 없으면 그만
        #print(line)
        #print(line.replace(","," "))
        line=line.replace(","," ").split()
        #print(line)
        intline=list(map(int,line))
        #print(intline)
        process.append(intline)
    process = process[:-1]
    f.close()
    global FIRST_PROCESS
    FIRST_PROCESS = process
    #print(process)
    return process
# print(readprocess())

NUM_OF_PROCESS = len(readprocess_from_txt())
FEEDBACK_LEVEL = 5
NUM_OF_PROCESS_ARG = 5
NUM_OF_PRINT_ARGS = 6
# global return_time_list
# return_time_list = list()

def check_zeros(input_list): # ex) input_list = [1,0,0,0,0]
    return ( [0] * len(input_list)== input_list) # 0밖에 없는 배열이면 true 아니면 false
    

def run_process(p,seq,t): # 2차원 배열 입장 ex) [[1,0,3,0,1],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
    # p = process / t = time
    p[seq][2] -= 1
    if (p[seq][2] == 0):
        end_time_list.append([p[seq][0],t]) # end_time_list = [[id,반환시간],[id,반환시간], ...]
    service_time_list=list()
    # print("p[seq]: ",p[seq])
    for i in range(NUM_OF_PROCESS): # 남은 서비스 타임들의 리스트
        if i == seq: # 이미 실행한 프로세스 제외
            pass
        else:
            service_time_list.append(p[i][2])
    print("service_time_list\n",service_time_list)
    # service_time_list=list(filter(lambda x:x[4]))
    
    if p[seq][4] < FEEDBACK_LEVEL and not check_zeros(service_time_list): # 피드백 레벨이 5를 넘지 않았고 나머지의 서비스타임이 0배열이 아니라면
        p[seq][4] += 1
    return p

###########################################################################################################################################
###########################################################################################################################################
###########################################################################################################################################
###########################################################################################################################################
###########################################################################################################################################

def feedback_sc(process):
    process.sort(key=lambda x:x[1]) # 도착시간 빠른순으로 정렬
    
    total_service_time = 0 # service time 총합
    arriv_time_list = list() # 도착시간 리스트
    # arriv_time_list = np.zeros(NUM_OF_PROCESS * 2).reshape(NUM_OF_PROCESS,2)
    # for i in range(NUM_OF_PROCESS): # process = [[1, 0, 3], [2, 2, 6], [3, 4, 4], [4, 6, 5], [5, 8, 2]]
    for i in process: # process = [[1, 0, 3], [2, 2, 6], [3, 4, 4], [4, 6, 5], [5, 8, 2]]
        arriv_time_list.append(i[1])
        # arriv_time_list[i] = [i,process[i][1]] # 도착시간 기록
        # process[i].append(0) # 4번째 인자 = Wait time
        # process[i].append(1) # 5번째 인자 = Feedback level
        i.append(0) # 4번째 인자 = Wait time
        i.append(1) # 5번째 인자 = Feedback level
        # total_service_time += process[i][2]
        total_service_time += i[2]
    # print("arriv time list\n",arriv_time_list)
    
    global end_time_list
    end_time_list = list()
    
    # print(process) [[1, 0, 3, 0, 1], [2, 2, 6, 0, 1], [3, 4, 4, 0, 1], [4, 6, 5, 0, 1], [5, 8, 2, 0, 1]]
    # table = np.zeros(total_service_time * NUMBER_OF_ARG * LEN_OF_PROCESS).reshape(total_service_time,NUMBER_OF_ARG,LEN_OF_PROCESS)
    table = np.zeros(NUM_OF_PROCESS * NUM_OF_PROCESS_ARG).reshape(NUM_OF_PROCESS,NUM_OF_PROCESS_ARG) # 5x5 배열
    # print(table) [[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
    # print(arriv_time_list) [0,2,4,6,8]
    
    state_of_process = -1 # 직전에 실행한 프로세스의 위치(초기값 = -1)
    # table 세팅 및 처리
    for i in range(total_service_time + 1): # i: 현재시간
        print("time: ",i) # i = 0일땐 추가만 하고 끝
        if (i == 0):
            table[0] = process[0]
            print("table\n",table)
            print()
            continue
        
        for j in range(NUM_OF_PROCESS):
            if (arriv_time_list[j]) == i: # 자기순서가 오면
                table[j] = process[j]   # 테이블에 프로세스 추가
        # ex) table: [[1,0,1,0,1],[2.2.6.0.1],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
        # print("table\n",table,"\n")
        
        # print("before table: ",table)
        processing_list = np.zeros(NUM_OF_PROCESS * NUM_OF_PROCESS_ARG).reshape(NUM_OF_PROCESS,NUM_OF_PROCESS_ARG)
        # 테이블에서 수행할 프로세스 복사해올 리스트 초기화
        
        for j in range(NUM_OF_PROCESS): # 테이블에서 피드백레벨=0(원소가 다 0)인 배열 제외 전부 가져온다
            if table[j][4] != 0:
                processing_list[j] = table[j]
        # print(processing_list)
        
        if (state_of_process != -1):
            temp = processing_list[state_of_process]
        # 피드백 레벨순으로 정렬된 배열
        processing_list = np.array(sorted(processing_list,key = lambda x:x[0] if (x[4] != 0) else 4))
        processing_list = np.array(sorted(processing_list,key = lambda x:x[4] if (x[4] != 0) else 4))
        
        if (state_of_process != -1): # state_of_process가 설정된 후 배열이 정렬되기 때문에 state_of_process 재설정
            for j in range(NUM_OF_PROCESS):
                if np.array_equal(processing_list[j], temp):
                    state_of_process = j
                    break
        # print("processing list: ",processing_list) # ex) [[2.2.6.0.1],[1,0,1,0,3],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
        
        # 작업 수행 - 0을 제외한 피드백 레벨순으로 정렬된 배열이므로 맨 앞의 것을 수행한다
        print("before\n",processing_list)
        
        for j in range(NUM_OF_PROCESS):
            # 남은 q가 0보다 크고 지금 막 들어온 프로세스가 아니면
            if (processing_list[j][2] > 0) and (processing_list[j][1] != i):
                ##### 문제점 #####
                # time=18 processing_list[2]번째가 실행해야하는데 넘어감
                # state_of_process가 정해지고 난 뒤 sort해서 그런듯
                ##### 해결 #####
                # 직전에 실행한 프로세스면
                if (state_of_process == j) and (processing_list[state_of_process][4] == FEEDBACK_LEVEL):
                    # 건너뛰기
                    continue
                # 직전에 실행한 프로세스가 아니면
                processing_list = run_process(processing_list,j,i)
                print("now processing: ",processing_list[j]) # 실행한 리스트 출력
                state_of_process = j # 실행한 프로세스의 위치 저장
                break
            
        # print("지금 막 들어온 프로세스의 도착시간\n",processing_list[state_of_process][1])
        for j in range(NUM_OF_PROCESS): # 실행한 프로세스 제외한 나머지 프로세스의 대기시간 증가
            if (j == state_of_process) or (i == processing_list[state_of_process][1]): # 실행한 프로세스의 위치이거나 지금 막 들어왔으면 대기시간 증가대상 제외
                pass
            else:
                if (processing_list[j][2] > 0) and (i != processing_list[j][1]): # 단, 남은 q가 있고 방금 도착한 프로세스가 아닌 경우만
                    processing_list[j][3] += 1
        print("after\n",processing_list)
        print()
        

        for j in range(NUM_OF_PROCESS):
            if processing_list[j][0] != 0:
                table[j] = processing_list[j] # 모두 수행한 리스트를 테이블로 반환

    last_table = np.array(sorted(table, key = lambda x:x[0])) # 최종테이블 id기준 정렬
    end_time_list = np.array(sorted(end_time_list, key = lambda x:x[0])) # 반환시간 리스트 id기준 정렬
    print("lasttable\n",last_table)
    # 최종 테이블: [[ 1.  0.  0.  1.  3.],[ 2.  2.  0. 12.  5.], [ 3.  4.  0.  8.  5.], [ 4.  6.  0.  8.  5.], [ 5.  8.  0.  1.  3.]]
    # print("arriv time list\n",arriv_time_list)
    # 도착시간 리스트: [0, 2, 4, 6, 8]
    # print("end_time_list\n",end_time_list)
    # 종료시간 리스트: [[ 1.  4.], [ 2. 20.], [ 3. 16.], [ 4. 19.], [ 5. 11.]]
    
    return_time_list = list()
    for i in range(NUM_OF_PROCESS):
        # print(end_time_list[i][1] - arriv_time_list[i]) # 종료시간 리스트 - 도착시간 리스트 (반환시간) 출력
        return_time_list.append(end_time_list[i][1] - arriv_time_list[i]) # 반환시간 리스트 (반환시간 = 종료시간 - 도착시간)
    # print("return_time_list\n",return_time_list)
    # 반환시간 리스트: [4.0, 18.0, 12.0, 13.0, 3.0]
    
    normalization_return_time_list = list()
    for i in range(NUM_OF_PROCESS):
        # print(return_time_list[i])
        # print(FIRST_PROCESS[i][2])
        normalization_return_time_list.append('%0.2f' % float(return_time_list[i]/FIRST_PROCESS[i][2])) # 반환시간 = 종료시간 - 도착시간
    # print("normalization return time list\n",normalization_return_time_list)
    # 반환시간 리스트: ['1.33', '3.00', '3.00', '2.60', '1.50']

    # 출력할것 ①프로세스 id, ②도착시간, ③서비스 시간, ④종료 시간, ⑤반환 시간, ⑥정규화된 반환 시간(반환시간/서비스시간)
    result = np.zeros(NUM_OF_PROCESS * NUM_OF_PRINT_ARGS).reshape(NUM_OF_PROCESS,NUM_OF_PRINT_ARGS) # 5 X 6
    for i in range(NUM_OF_PROCESS):
        result[i][0] = last_table[i][0] # 프로세스 id
        result[i][1] = last_table[i][1] # 도착시간
        result[i][2] = FIRST_PROCESS[i][2] # 서비스 시간
        result[i][3] = end_time_list[i][1] # 종료 시간
        result[i][4] = return_time_list[i] # 반환 시간
        result[i][5] = normalization_return_time_list[i] # 정규화된 반환 시간 (반환시간/서비스시간)
    
    return result
    

result = feedback_sc(readprocess_from_txt())
result = np.array(sorted(result,key = lambda x:x[3])) # 도착순 정렬

for i in range(NUM_OF_PROCESS):
    print("[id / 도착 / 서비스 / 종료 / 반환 / 정규화반환]\n",result[i])
    print("")
# print("result\n","[id / 도착 / 서비스 / 종료 / 반환 / 정규화반환]\n",feedback_sc(readprocess_from_txt()))
# print("FIRST PROCESS\n",FIRST_PROCESS)