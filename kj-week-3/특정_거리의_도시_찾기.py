from collections import deque

n, m, k, x = map(int, input().split())

graph = [[] for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)

path = []
queue = deque()
visited = [False] * (n + 1)

# def bfs(start):
#     queue.append(start)

#     while queue:
#         node = queue.popleft()

#         for i in graph[node]:
#             if not visited[i]:
#                 visited[i] = True
#                 path.append(i)
#                 queue.append(i)

# bfs(x)

def dfs(node, visited, graph):
    if visited[node]:
        return

    for i in graph[node]:
        if not visited[i]:
            visited[i] = True
            cnt += 1
            path.append(i)
            if len(path) == k:
                return True
            dfs(i, visited, graph)

print(dfs(x, visited, graph))