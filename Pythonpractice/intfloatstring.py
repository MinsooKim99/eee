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
#����ǥ 3���� 1���� �Ȱ���
#����ǥ�� 3���� ������ ������� ����ǥ�� �����ϱ� ����
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
# %s �� �ظ��ϸ� �� ����

a='%0.4f' % (1.12345678)
print(a)