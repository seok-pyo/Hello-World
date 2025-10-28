# 입력을 받아서 그래프로 자료구조를 만드는 것.
import sys
from collections import deque
input = sys.stdin.readline

n, m, v = map(int, input().split())

# 인접행렬로 그래프를 만들기
graph = [[False] * (n + 1) for _ in range(n + 1)]
visit = [False] * (n + 1)

for _ in range(m):
    s, e = map(int, input().split())
    graph[s][e] = True
    graph[e][s] = True

dfs_result = []

# dfs
def dfs(v):
    visit[v] = True
    dfs_result.append(v)
    for i in range(1, n + 1):
        if not visit[i] and graph[v][i]:
            dfs(i)
dfs(v)

#bfs
visit = [False] * (n + 1)
bfs_order = []

def bfs(start):
    q = deque([start])
    visit[start] = True

    while q:
        cur = q.popleft()
        bfs_order.append(cur)
        for i in range(1, n + 1):
            if graph[cur][i] and not visit[i]:
                visit[i] = True
                q.append(i)




bfs(v)
print(*dfs_result)
print(*bfs_order)




