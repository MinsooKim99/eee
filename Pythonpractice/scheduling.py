import sys
from tabnanny import check
from time import time


i="input-2.txt" # 제출할때 input.txt로 고칠 것
f=open(i,'r')
def readprocess(): # txt파일 읽기
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
# class round_robin:
#     def __init__(self):
#         pass
        
#     def rr_algorithm(self,ps_list):
#         # print("before args = ",args)
#         # for arg in args:
#             # print("arg = ",arg) # ex) [[1.0.3.0.1]]
#         # print("ps_list = ",ps_list)
#         ps_list[2] -= 1 # q를 하나 줄인다
#         if ps_list[4] < 5: # level이 5 미만이면
#             ps_list[4] += 1 # feedback level을 하나 올린다
#         print("after processing = ",ps_list)
#         global time_count
#         print("time: ",time_count)
#         time_count += 1
#         # print()
#         return ps_list

time_count = 1

def check_isempty(p):
    return (p[2] <= 0)

def check_my_seq(t): # 현 시점 프로세싱할 대상자인지 확인
    return (t+1 <= time_count) # 도착시간 + 1에서 수행이 시작되기 때문에 t+1에서 비교

class queue:
    def __init__(self):
        self.q=list()
    
    def add_process(self,q): # ex) q = [[1,0,3,0,1],[2,2,6,0,1]]
        self.q.append(q)

    def remove_process(self):
        self.q = list()

    def run_process(self): # 프로세스 실행으로 인한 q 1감소, 피드백큐 레벨업
        global time_count
        if self.q:
            for i in self.q:
                if not check_isempty(i):
                    i[2] -= 1
                    if i[4] < LEN_OF_PROCESS:
                        i[4] += 1
                    print("time: ",time_count)
                    print("after processing: ",i)
                    print()
                    time_count += 1
                else:
                    pass
            
        
    # def get_arrival(self): # 도착시간 리스트로 반환
    #     return [x[1] for x in self.q]
    
    # def get_queue(self): # 필드의 q 가져오기
    #     return self.q
    
    # def lv_upper(self,l): # 피드백 큐 레벨 업
    #     self.q[l][4] += 1
        
    # def getlv_queue(self): # 피드백 큐 레벨 반환
    #     return self.q[4]


# rr알고리즘을 이용한 전체적인 피드백 알고리즘
def feedback_algorithm(process):
    result=list()
    process=process[:-1] # 0 컷
    global LEN_OF_PROCESS
    LEN_OF_PROCESS = len(process)
    process.sort(key=lambda x:x[1]) # 도착시간 빠른순으로 정렬
    # print(process)
    # process = [[1, 0, 3], [2, 2, 6], [3, 4, 4], [4, 6, 5], [5, 8, 2]]
    
    # print([x[2] for x in process])
    total_service_time = 0 # service time 총합
    for x in process:
        x.append(0) # 4번째 인자 = Wait time
        x.append(1) # 5번째 인자 = Feedback level
        total_service_time += x[2]
    # print("total service time: ",total_service_time)
    q1 = queue(); q2 = queue(); q3 = queue(); q4 = queue(); q5 = queue()
    
    while 1:
        for i in range(LEN_OF_PROCESS):
            if check_my_seq(process[i][1]) and process[i][2] != 0:
                if process[i][4] == 1:
                    q1.add_process(process[i])
                elif process[i][4] == 2:
                    q2.add_process(process[i])
                elif process[i][4] == 3:
                    q3.add_process(process[i])
                elif process[i][4] == 4:
                    q4.add_process(process[i])
                elif process[i][4] == 5:
                    q5.add_process(process[i])
            else:
                pass
            
        # 우선순위 높은 큐부터 순차적으로 실행
        q1.run_process(); q2.run_process(); q3.run_process(); q4.run_process(); q5.run_process()
        result.append(q1.q); result.append(q2.q); result.append(q3.q); result.append(q4.q); result.append(q5.q)
        # 작업 한번 처리한 프로세스기록 삭제
        q1.remove_process(); q2.remove_process(); q3.remove_process(); q4.remove_process(); q5.remove_process()
        
        
        # print(q1.q)
        # print(q2.q)
        # print(q3.q)
        # print(q4.q)
        # print(q5.q)
                
        if time_count > total_service_time:
            print(result)
            break
    # 출력할것 ①프로세스 id, ②도착시간, ③서비스 시간, ④종료 시간, ⑤반환 시간, ⑥정규화된 반환 시간
    # return result

process=readprocess()
# rr_0=round_robin()
# print(len(process))
feedback_algorithm(process)
# print("return value = ",rr_0.rr_algorithm(process[0],process[1]))