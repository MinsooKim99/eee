# 패키지 : 모듈을 여러개 모아놓은것
#import newfolder.new           # 이렇게 가져오면
#newfolder.new.sayHi()          # 너무 길다
#from newfolder import new as n # 이렇게 하면
#n.sayHi()                      # 짧다
from newfolder import *         # __init__.py 파일에
new.sayHi()                     # __all__=['new'] 추가
                                # 위에거 추가안하면 에러
def sayA():
    print('A')