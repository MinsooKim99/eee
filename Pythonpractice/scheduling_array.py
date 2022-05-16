import numpy as np

def readprocess(): # txt파일 읽기
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
    #print(process)
    return process

LEN_OF_PROCESS = len(readprocess())
# print(readprocess())
FEEDBACK_LEVEL = 5
NUMBER_OF_ARG = 5

def check_zeros(input_list): # ex) input_list = [1,0,0,0,0]
    return ( [0] * len(input_list)== input_list) # 0밖에 없는 배열이면 true 아니면 false
    

def run_process(p,seq): # 2차원 배열 입장 ex) [[1,0,3,0,1],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
    p[seq][2] -= 1
    # lv5_list=list()
    # if p[seq][4] != 5:
    #     p[seq][2] -= 1
    # else:
    #     for i in range(LEN_OF_PROCESS):
    #         if p[i][4] == 5:
    #             lv5_list.append()
    
    service_time_list=list()
    # print("p[seq]: ",p[seq])
    for i in range(LEN_OF_PROCESS): # 남은 서비스 타임들의 리스트
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
    arriv_time_list=list() # 도착시간 리스트
    for x in process: # process = [[1, 0, 3], [2, 2, 6], [3, 4, 4], [4, 6, 5], [5, 8, 2]]
        arriv_time_list.append(x[1])
        x.append(0) # 4번째 인자 = Wait time
        x.append(1) # 5번째 인자 = Feedback level
        total_service_time += x[2]
    # print(process) [[1, 0, 3, 0, 1], [2, 2, 6, 0, 1], [3, 4, 4, 0, 1], [4, 6, 5, 0, 1], [5, 8, 2, 0, 1]]
    # table = np.zeros(total_service_time * NUMBER_OF_ARG * LEN_OF_PROCESS).reshape(total_service_time,NUMBER_OF_ARG,LEN_OF_PROCESS)
    table = np.zeros(LEN_OF_PROCESS * NUMBER_OF_ARG).reshape(LEN_OF_PROCESS,NUMBER_OF_ARG) # 5x5 배열
    # print(table) [[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
    # print(arriv_time_list) [0,2,4,6,8]
    
    state_of_process = -1 # 직전에 실행한 프로세스의 위치(초기값 = -1)
    # table 세팅 및 처리
    for i in range(total_service_time + 1): # i: 현재시간
        print("time: ",i)
        if (i == 0):
            table[0] = process[0]
            print("table\n",table)
            print()
            continue
        
        for j in range(LEN_OF_PROCESS):
            if (arriv_time_list[j]) == i: # 자기순서가 오면
                table[j] = process[j]   # 테이블에 프로세스 추가
        # ex) table: [[1,0,1,0,1],[2.2.6.0.1],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
        # print("table\n",table,"\n")
        
        # print("before table: ",table)
        processing_list = np.zeros(LEN_OF_PROCESS * NUMBER_OF_ARG).reshape(LEN_OF_PROCESS,NUMBER_OF_ARG)
        # 테이블에서 수행할 프로세스 복사해올 리스트 초기화
        
        for j in range(LEN_OF_PROCESS): # 테이블에서 피드백레벨=0(원소가 다 0)인 배열 제외 전부 가져온다
            if table[j][4] != 0:
                processing_list[j] = table[j]
        # print(processing_list)
        
        # 피드백 레벨순으로 정렬된 배열
        processing_list = np.array(sorted(processing_list,key = lambda x:x[0] if (x[4] != 0) else 4))
        processing_list = np.array(sorted(processing_list,key = lambda x:x[4] if (x[4] != 0) else 4))
        # print("processing list: ",processing_list) # ex) [[2.2.6.0.1],[1,0,1,0,3],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
        
        # 작업 수행 - 0을 제외한 피드백 레벨순으로 정렬된 배열이므로 맨 앞의 것을 수행한다
        print("before\n",processing_list)
        
        for j in range(LEN_OF_PROCESS):
            # 남은 q가 0보다 크고 지금 막 들어온 프로세스가 아니면
            if (processing_list[j][2] > 0) and (processing_list[j][1] != i):
                # 직전에 실행한 프로세스면
                if (state_of_process == j) and (processing_list[state_of_process][4] == FEEDBACK_LEVEL):
                    # 건너뛰기
                    continue
                # 직전에 실행한 프로세스가 아니면
                processing_list = run_process(processing_list,j)
                print("now processing: ",processing_list[j]) # 실행한 리스트 출력
                state_of_process = j # 실행한 프로세스의 위치 저장
                break
            
        # print("지금 막 들어온 프로세스의 도착시간\n",processing_list[state_of_process][1])
        for j in range(LEN_OF_PROCESS): # 실행한 프로세스 제외한 나머지 프로세스의 대기시간 증가
            if (j == state_of_process) or (i == processing_list[state_of_process][1]): # 실행한 프로세스의 위치이거나 지금 막 들어왔으면 대기시간 증가대상 제외
                pass
            else:
                if processing_list[j][2] > 0: # 단, 남은 q가 있을때만
                    processing_list[j][3] += 1
        print("after\n",processing_list)
        print()
        

        for j in range(LEN_OF_PROCESS):
            if processing_list[j][0] != 0:
                table[j] = processing_list[j] # 모두 수행한 리스트를 테이블로 반환
        
        
        
        
        
        # table을 20x5x5로 했을때 - 폐기할듯
        # append_list = np.zeros(LEN_OF_PROCESS * FEEDBACK_LEVEL).reshape(LEN_OF_PROCESS,FEEDBACK_LEVEL)
        # for j in range(LEN_OF_PROCESS):
        #     # if process[j][1] in arriv_time_list: # 현재시간(i)에 도착했으면
        #     append_list[j] = np.array(process[j])
        #     # else:
        #     #     append_list[j] = np.zeros(NUMBER_OF_ARG)
        #     # print("append_list[j]= ",append_list[j])
        # # print("append_list: ",append_list)
        # # print(table[i])
        # for k in range(LEN_OF_PROCESS):
        #     # table = np.append(table[i],append_list[k])
        #     table[i][k] = append_list[k]
        # # print("append_list[k]= ",append_list[k])
        # # print(table[i])
        # append_list = np.array([])

    print(np.array(sorted(table, key = lambda x:x[0])))
    
    
    
feedback_sc(readprocess())