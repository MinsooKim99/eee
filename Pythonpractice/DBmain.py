# -*- coding: utf-8 -*-
import pymssql
from DBproject import *
 
# MSSQL ? ‘?†
conn = pymssql.connect(host=r"(local)", user='sa', password='9132', database='master', charset='EUC-KR')
# Connection ?œ¼ë¡œë???„° Cursor ?ƒ?„±
cursor = conn.cursor()

input_num=-1
while True:
    if (input_num==0):
        break
    else:
        is_login=plz_login()
        while is_login:
            menu()
            input_num=int(input("ë²ˆí˜¸ ?…? ¥: "))
            if input_num==1:
                print("?•„ì§?")
            elif input_num==2:
                search()
                input("ê³„ì†?•˜? ¤ë©? ?•„ë¬? ?‚¤?‚˜ ?ˆ„ë¥´ì„¸?š”...")
            elif input_num==3:
                addLib()
            elif input_num==4:
                delLib()
            elif input_num==5:
                is_login=False
            elif input_num==0:
                print("%s?‹˜ ì¢‹ì???•˜ë£? ?˜?„¸?š”."%(id))
                break
            else:
                print("?‹¤?‹œ ?…? ¥?•˜?„¸?š”.")
                
conn.close()