f=open("input.txt","r")
data2=f.read()
f.close()
data2list=data2.split()
data2len=len(data2list)
plist=[]
is_palindrome=True
for x in range(0,data2len):
    for i in range(len(data2list(x)) // 2):
        is_palindrome=True
        if word[i] != word[-1 - i]:      # �쇊履� 臾몄옄��� �삤瑜몄そ 臾몄옄瑜� 鍮꾧탳�븯�뿬 臾몄옄媛� �떎瑜대㈃
            is_palindrome = False        # �쉶臾몄씠 �븘�떂
            break
    if (is_palindrome==True):
        plist.append(data2list(x))
print(plist)
