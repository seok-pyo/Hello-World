from collections import deque


n = int(input())
graph = [[] for i in range(n + 1)]
indegree = [0] * (n + 1)
time = [0] * (n + 1)

for _ in range(1, n + 1):
    input_data = 0
    cnt = True
    while input_data != -1:
        input_data = int(input())
        if cnt:
            time[n] = input_data
            cnt = False
            continue
        indegree[n]



