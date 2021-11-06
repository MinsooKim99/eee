import sys
option=sys.argv[1]
try:
    memo=sys.argv[2]
except Exception as e:
        print(str(e))

if option=='-a':
    f=open('memo.txt','a')
    f.write(memo)
    f.write('\n')
    f.close()
elif option=='-r':
    f=open('memo.txt','r')
    a=f.read()
    print(a)
    f.close()