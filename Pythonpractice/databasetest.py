# pymssql 패키지 import
# -*- coding: utf-8 -*-
import pymssql
 
# MSSQL 접속
conn = pymssql.connect(host=r"(local)", user='sa', password='9132', database='master', charset='EUC-KR')
 
# Connection 으로부터 Cursor 생성
cursor = conn.cursor()
 
# SQL문 실행
cursor.execute('SELECT * FROM EMPLOYEE')
 
# 데이타 하나씩 Fetch하여 출력
row = cursor.fetchone()
while row:
    print(row[0], row[1])
    row = cursor.fetchone()
   
# 연결 끊기
conn.close()    