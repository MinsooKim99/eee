# -*- coding: utf-8 -*-
import pymssql
from DBproject import *
 
# MSSQL ? ?
conn = pymssql.connect(host=r"(local)", user='sa', password='9132', database='master', charset='EUC-KR')
# Connection ?Όλ‘λ???° Cursor ??±
cursor = conn.cursor()

input_num=-1
while True:
    if (input_num==0):
        break
    else:
        is_login=plz_login()
        while is_login:
            menu()
            input_num=int(input("λ²νΈ ?? ₯: "))
            if input_num==1:
                print("?μ§?")
            elif input_num==2:
                search()
                input("κ³μ?? €λ©? ?λ¬? ?€? ?λ₯΄μΈ?...")
            elif input_num==3:
                addLib()
            elif input_num==4:
                delLib()
            elif input_num==5:
                is_login=False
            elif input_num==0:
                print("%s? μ’μ???λ£? ??Έ?."%(id))
                break
            else:
                print("?€? ?? ₯??Έ?.")
                
conn.close()