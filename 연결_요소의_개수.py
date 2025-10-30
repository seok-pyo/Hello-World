import sys
from collections import deque

input = sys.stdin.readline
n, m = map(int, input().split())

graph = [[] * (n + 1) for _ in range(n + 1)]

for i in range(1, m):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)

visited = [False] * (n + 1)

result = 0
d = deque([1])

while d:
    for i in range(1, n + 1):
        for j in range(len(graph[i])):

    next = d.popleft()
    if visited[next]:
        continue

    visited[next] = True
    d.push(next)

result+=1