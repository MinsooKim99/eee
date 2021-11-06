import re
data='''
kim 990609-1053112
'''
pat=re.compile('(\d{6})[-]\d{7}')    # 정규표현식을 지원하는 re를 이용한
print(pat.sub('\g<1>-*******',data)) # 정규표현식

p=re.compile('[a-z]+') # A부터 Z까지 한번이상 반복되는
m=p.match('python')    # 꼭 첫번째부터 일치해야함
print(m)               # match search 기본적으로 비슷한기능
m=p.search('3 python') # 꼭 첫번째가 일치하지 않아도 됨
print(m)
print(m.group())       # 전체
print(m.start())       # 시작하는 번호
print(m.end())         # 끝나는 번호
print(m.span())        # (시작)~(끝) 번호

#m=p.findall('life is too short') # 문자열을 리스트로 저장
m=p.finditer('life is too short') # match객체로 저장
print(m)
for r in m:
    print(r)

p=re.compile('a.b',re.S) # a와 b사이에 공백을 제외한 무언가가 있냐
m=p.match('a\nb')        # re.DOTALL(= re.S) 옵션을 줘서 \n도 매치됨
print(m)                 # a와 b사이에 공백밖에 없으므로 출력: None
                         # DOTALL 옵션을 준 경우: 매치됨
#p=re.compile('[a-z]')
p=re.compile('[a-z]',re.I)#옵션X  옵션O(re.I: 대문자무시)
print(p.match('python')) # 매치   매치
print(p.match('Python')) # None   매치 
print(p.match('PYTHON')) # None   매치

p=re.compile('^python\s\w+',re.M) # python이 시작에 있으며 그뒤에 공백
                                  # 그뒤에 알파벳/숫자/_중 하나가 있어야 한다
data='''python one
life is too short
python two
you need python
python three
'''
print(p.findall(data))  # 옵션X: 첫문장밖에 안나옴
                        # 옵션O: 세개 다 나옴
p=re.compile('Crow|Servo') # Crow or Servo
m=p.match('CrowHello')
print(m)

print(re.search('^Life','Life is too short')) # 컴파일 안하고
print(re.search('^Life','My life'))           # 한번에 Search
print(re.search('short$','Life is too short'))# ^는 시작
print(re.search('short$','short life'))       # $는 끝
p=re.compile(r'\bis\b')                       # \b는 공백
print(p.search('Life is too short'))          # 등등
print(p.search('Lifeistooshort'))

#그루핑 ()
p=re.compile('(?P<name>ABC)+')  # ?P<name> 그루핑된 문자열에
                                # 이름붙이기
m=p.search('ABCABCABC OK?')
print(m)
print(m.group())   # search한걸 그룹으로 만듬
print(m.group('name'))
# 전방탐색 긍정형 (?=) 검색할땐 포함 결과는 미포함
# 전방탐색 부정형 (?!) 미포함
# 문자열 바꾸기 sub p.sub('colour','a b c') > ('colour colour colour')
# 존나많네
# 필요할때 구글링