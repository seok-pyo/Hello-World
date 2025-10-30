# 이 문제의 경우 bfs, dfs로 풀어도 상관이 없다.

# import sys
# from collections import deque

# input = sys.stdin.readline
# n, m = map(int, input().split())

# # graph = [[] * (n + 1) for _ in range(n + 1)]
# graph = [[] for _ in range(n + 1)]

# for i in range(m):
#     s, e = map(int, input().split())
#     graph[s].append(e)
#     graph[e].append(s)

# visited = [False] * (n + 1)
# result = 0

# for start in range(1, n + 1):
#     if visited[start]:
#         continue
#     result += 1
#     q = deque([start])
#     visited[start] = True

#     while q:
#         u = q.popleft()
#         for v in graph[u]:
#             if not visited[v]:
#                 visited[v] = True
#                 q.append(v)

# print(result)

import sys
sys.setrecursionlimit(10**6)

input = sys.stdin.readline
n, m = map(int, input().split())

graph = [[] * (n + 1) for _ in range(n + 1)]

for i in range(m):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)


def dfs(u):
    visited[u] = True
    for v in graph[u]:
        if not visited[v]:
            dfs(v)

visited = [False] * (n + 1)
result = 0
for i in range(1, n + 1):
    if not visited[i]:
        result += 1
        dfs(i)

print(result)

