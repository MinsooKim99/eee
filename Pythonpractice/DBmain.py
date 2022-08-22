# -*- coding: utf-8 -*-
import pymssql
from DBproject import *
 
# MSSQL ??�
conn = pymssql.connect(host=r"(local)", user='sa', password='1111', database='master', charset='EUC-KR')
# Connection ?愍�罹???┣ Cursor ?�?┳
cursor = conn.cursor()

input_num=-1
while True:
    if (input_num==0):
        break
    else:
        is_login=plz_login()
        while is_login:
            menu()
            input_num=int(input("�逸从 ?桿?･: "))
            if input_num==1:
                print("?符�?")
            elif input_num==2:
                search()
                input("���?葺?､�? ?符�? ?う?ｘ ?��ｴ�ｸ?囈...")
            elif input_num==3:
                addLib()
            elif input_num==4:
                delLib()
            elif input_num==5:
                is_login=False
            elif input_num==0:
                print("%s?鋸 �駆???葺�? ?据?┷?囈."%(id))
                break
            else:
                print("?共?亨 ?桿?･?葺?┷?囈.")
                
conn.close()
