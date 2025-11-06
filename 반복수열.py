# 딕셔너리로 수열을 반복해서 만들면서, 이전에 존재한 값이 있는지를 매번 확인해준다.
# 부족했던 부분 > 자리수로 계산해서 값을 구하는 방법

# import sys
# input = sys.stdin.readline

# def next_value(x, p):
#     s = 0
#     while x > 0:
#         x, d = divmod(x, 10)
#         s += d ** p
#     return s

# a, p = map(int, input().split())

# seen = {a: 0} # 왜 idx를 0으로 하는거지?
# cur = a
# idx = 0

# while True:
#     idx += 1
#     cur = next_value(cur, p)
#     if cur in seen:
#         print(seen[cur])
#         break
#     seen[cur] = idx

# print(seen[cur])
