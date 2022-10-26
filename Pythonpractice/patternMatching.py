# 패턴 매칭 알고리즘
def match(P, S, n, m):  # Pattern, String, n, m
    l = 0;  is_matched = False
    while(l <= n-m and not is_matched):
        l += 1
        r = 0;  is_matched = True
        while(r < m and is_matched):
            print("P[%d]: %c\nS[%d] = %c\n" % (r, P[r], l+r, S[l+r]))
            is_matched = is_matched and (P[r] == S[l+r])
            r += 1
    return l


input_str = input("String을 입력하세요.")
input_ptr = input("Pattern을 입력하세요.")
num_of_str = len(input_str)
num_of_ptr = len(input_ptr)

print("pattern의 위치: ", match(input_ptr, input_str, num_of_str, num_of_ptr))


# print(match("ce", "abcdefgh", 8, 2))