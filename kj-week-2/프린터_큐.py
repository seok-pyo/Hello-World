# from collections import deque

# tc = int(input())

# for _ in range(tc):
#     n, m = map(int, input().split())

#     documents = deque(map(int, input().split()))

#     target = documents[m]

#     for _ in range(n):
#         if documents[0] == max(documents):

# 풀이 실패

from collections import deque


t = int(input())

for _ in range(t):
    n, q = map(int, input().split())

    p = list(map(int, input().split()))

    printer = deque()
    for x in p:
        printer.append(x)