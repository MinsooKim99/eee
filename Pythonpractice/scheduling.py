import sys
i="input-2.txt" # 제출할때 input.txt로 고칠 것
f=open(i,'r')
time_count = 0
def readprocess():
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
    f.close()
    #print(process)
    return process

# rr알고리즘
class round_robin:
    def __init__(self):
        pass
        
    def rr_algorithm(self,*args):
        print("before args = ",args)
        for arg in args:
            # print("arg = ",arg)
            arg[2] -= 1
        print("after args = ",args)
        global time_count
        print(time_count)
        time_count += 1
        return args

def check_my_seq(p):
    return (p[1] == time_count)

# rr알고리즘을 이용한 전체적인 피드백 알고리즘
def feedback_algorithm(process):
    # process = [[1, 0, 3], [2, 2, 6], [3, 4, 4], [4, 6, 5], [5, 8, 2], [0]]
    # feedback_list=list()
    result=list()
    process=process[:-1] # 0 컷
    process.sort(key=lambda x:x[1]) # 도착시간 빠른순으로 정렬
    # print(process)
    # process = [[1, 0, 3], [2, 2, 6], [3, 4, 4], [4, 6, 5], [5, 8, 2]]
    
    # print([x[2] for x in process])
    total_service_time = 0
    for x in process:
        x.append(0) # 4번째 인자 = wait time
        total_service_time += x[2]
    # print(total_service_time)
    
    rr_1 = round_robin(); rr_2 = round_robin(); rr_3 = round_robin()
    rr_4 = round_robin(); rr_5 = round_robin()
    # feedback level=5
    
    while 1:
        if (process[0][2] != 0): # 1번째 프로세스의 남은 서비스타임이 0이 아니면
            #for x in range(process[1][1]-process[0][1]): # 2번째가 도착하기 전까지 1번째 실행
            rr_1.rr_algorithm(process[0])
        if (process[1][2] != 0): # 2번째 프로세스의 남은 서비스타임이 0이 아니면
            if check_my_seq(process[1]): # + 도착하면 rr_1에 진입
                rr_1.rr_algorithm(process[1])
            else:
                rr_1.rr_algorithm(process[0])
        if (process[2][2] != 0): # 3번째 프로세스의 남은 서비스타임이 0이 아니면
            if check_my_seq(process[2]): # + 도착하면 rr_1에 진입
                rr_1.rr_algorithm(process[2])
        if (process[3][2] != 0): # 4번째 프로세스의 남은 서비스타임이 0이 아니면
            if check_my_seq(process[3]): # + 도착하면 rr_1에 진입
                rr_1.rr_algorithm(process[3])
        if (process[4][2] != 0): # 5번째 프로세스의 남은 서비스타임이 0이 아니면
            if check_my_seq(process[4]): # + 도착하면 rr_1에 진입
                rr_1.rr_algorithm(process[4])
        
        # rr_1.rr_algorithm()
        # rr_2.rr_algorithm()
        # rr_3.rr_algorithm()
        # rr_4.rr_algorithm()
        # rr_5.rr_algorithm()
        if time_count >= total_service_time:
            break
        
        # for each_process in process:
        #     id=each_process[0]
        #     aval_time=each_process[1]
        #     serv_time=each_process[2]
        
    # 출력할것 ①프로세스 id, ②도착시간, ③서비스 시간, ④종료 시간, ⑤반환 시간, ⑥정규화된 반환 시간
    # return result

process=readprocess()
# rr_0=round_robin()
print(feedback_algorithm(process))
# print("return value = ",rr_0.rr_algorithm(process[0],process[1]))