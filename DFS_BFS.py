# DFS와 BFS 1260

# 정점의 개수 : N
# 간선의 개수 : M
# 시작 정점 : V

# 인접 행렬

# import sys

# def dfs(idx):
#     global visited
#     visited[idx] = True
#     print(idx, end = ' ')
#     for next in range(1, N + 1) :
#         if not visited[next] and graph[idx][next]:
#             dfs(next)

# def bfs():
#     global q, visited
#     while q:
#         cur = q.pop(0)
#         visited[cur] = True
#         print(cur, enc = ' ')
#         for next in range(1, N + 1):
#             if not visited[next] and graph[cur][next]:
#                 visited[next] = True
#                 q.append(next)

# # 0. 그래프 입력 받기
# input = sys.stdin.readline
# N, M, V = map(int, input().split())

# graph = [[False] * (N + 1) for _ in range(N + 1)]
# visited = [False] * (N + 1)

# # 1. 그래프 정보 입력
# for _ in range(M):
#     a, b = map(int, input().split())
#     graph[a][b] = True
#     graph[b][a] = True

# # 2. dfs
# dfs(V)
# print()

# # 3. bfs
# visited = [False] * (N + 1)
# q = [V]
# bfs()

# 인접 리스트

import sys
from collections import deque

input = sys.stdin.readline
sys.setrecursionlimit(1_000_000)

n, m, v = map(int, input().split())
graph = [[] for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

for i in range(1, n + 1):
    graph[i].sort()

# DFS
visited = [False] * (n + 1)
dfs_order = []

def dfs(x):
    visited[x] = True
    dfs_order.append(x)
    for nx in graph[x]:
        if not visited[nx]:
            dfs(nx)

dfs(v)

# BFS
visited = [False] * (n + 1)
bfs_order = []

def bfs(start):
    q = deque([start])
    visited[start] = True
    while q:
        x = q.popleft()
        bfs_order.append(x)
        for nx in graph[x]:
            if not visited[nx]:
                visited[nx] = True
                q.append(nx)

bfs(v)

print(*dfs_order)
print(*bfs_order)