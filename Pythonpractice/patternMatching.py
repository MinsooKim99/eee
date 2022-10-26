# 패턴 매칭 알고리즘
def match(P, S, n, m):                  # Pattern, String, String의 길이, Pattern의 길이
    l = 0;  matched = False             # l: 첫번째 인덱스의 위치   matched: 일치하는가?
    while(l <= n-m and not matched):    # 첫번째 인덱스가 n-m보다 작거나 같고 일치하지 않으면 계속
        l += 1
        r = 0;  matched = True          # r: 첫번째 패턴이 일치할 경우 다음 패턴의 인덱스
        while(r < m and matched):       # Pattern의 길이 이내에서 matched 되는 동안 계속 검사
            # print("P[%d]: %c\nS[%d] = %c\n" % (r, P[r], l+r, S[l+r]))
            matched = matched and (P[r] == S[l+r])  # Pattern과 String 비교
            r += 1
    return l                            # matched된 시작 인덱스 or 마지막 인덱스 반환

if __name__=="__main__":
    input_str = "abcdefghij"                       # String

    print("String: abcdefghij")

    input_ptr = input("Pattern을 입력하세요: ")      # Pattern 입력 받음
    len_of_str = len(input_str)                     # n = String의 길이
    len_of_ptr = len(input_ptr)                     # m = Pattern의 길이

    result = match(input_ptr, input_str, len_of_str, len_of_ptr)

    if (result == len_of_str - 1):                  # Pattern과 일치하는 인덱스를 찾지 못했을때
        print("pattern을 찾을 수 없습니다.")
    else:                                           # Pattern과 일치하는 인덱스를 찾았을때
        print("pattern의 시작 index: ", result)
