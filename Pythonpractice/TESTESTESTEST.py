# pymssql 패키지 import
# -*- coding: utf-8 -*-
import pymssql
conn = pymssql.connect(host=r"(local)", user='sa', password='9132', database='master', charset='UTF-8')
cursor = conn.cursor()

cursor.execute("""SELECT AVG(Score),BookID FROM Evaluate GROUP BY BookID,UserID ORDER BY AVG(Score) DESC""")
row=cursor.fetchall()
print(row[0][1])


conn.close()