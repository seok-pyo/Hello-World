comp = int(input())
conn = int(input())

cnt = 0

graph = [[] for _ in range(comp + 1)]
visited = [False] * (comp + 1)

for _ in range(conn):
    s, e = map(int, input().split())

    graph[s].append(e)
    graph[e].append(s)

def dfs(node, graph, visited):
    global cnt
    if visited[node]:
        return

    visited[node] = True
    cnt += 1

    for i in graph[node]:
        if not visited[i]:
            dfs(i, graph, visited)

dfs(1, graph, visited)

print(cnt - 1)
