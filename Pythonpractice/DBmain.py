# -*- coding: utf-8 -*-
import pymssql
from DBproject import *
 
# MSSQL ?��?��
conn = pymssql.connect(host=r"(local)", user='sa', password='9132', database='master', charset='EUC-KR')
# Connection ?��로�???�� Cursor ?��?��
cursor = conn.cursor()

input_num=-1
while True:
    if (input_num==0):
        break
    else:
        is_login=plz_login()
        while is_login:
            menu()
            input_num=int(input("번호 ?��?��: "))
            if input_num==1:
                print("?���?")
            elif input_num==2:
                search()
                input("계속?��?���? ?���? ?��?�� ?��르세?��...")
            elif input_num==3:
                addLib()
            elif input_num==4:
                delLib()
            elif input_num==5:
                is_login=False
            elif input_num==0:
                print("%s?�� 좋�???���? ?��?��?��."%(id))
                break
            else:
                print("?��?�� ?��?��?��?��?��.")
                
conn.close()