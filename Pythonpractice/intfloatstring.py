#-*- encoding: utf-8 -*-
a=2
b=5
print(b/a)
print(b//a)
a='helloworld'
b="helloworld"
c='''hello\nworld'''
d="""hello
world
boy
!"""
#따옴표 3개나 1개나 똑같음
#따옴표가 3개인 이유는 문장안의 따옴표를 구분하기 위함
print(a)
print(b)
print(c)
print(d)
print(type(a))
print(type(b))
print(type(c))
print(type(d))

a='Hello '
b='World!'
print(a+b)
print(a*10)
print(a[0])
print(a[:4])

c= '%s %s' % (a,b)
print(c)
# %s 면 왠만하면 다 받음

a='%0.4f' % (1.12345678)
print(a)