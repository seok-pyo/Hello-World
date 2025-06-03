node, vertex = map(int, input().split())

graph = [[] for _ in range(node + 1)]

visited = [False] * (node + 1)

for _ in range(vertex):
    u, v = map(int, input().split())

    graph[u].append(v)
    graph[v].append(u)

def dfs(node):
    visited[node] = True
    for i in graph[node]:
        if not visited[i]:
            dfs(i)

count = 0
for i in range(1, node + 1):
    if not visited[i]:
        dfs(i)
        count += 1

print(count)