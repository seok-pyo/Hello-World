# n, m, v = map(int, input().split())

# graph=[[] for _ in range(n + 1)]

# for i in range(m):
#     s,e=map(int, input().split())

#     graph[s].append(e)
#     graph[e].append(s)

# visited = [False] * (n+1)

# dlist = []

# def dfs(graph, idx, visited):
#     visited[idx] = True
#     dlist.append(idx)

#     for i in sorted(graph[idx]):
#         if not visited[i]:
#             dfs(graph, i, visited)

# dfs(graph, v, visited)
# print(*dlist)

# from collections import deque

# visited2=[False] * (n+1)
# blist=[]

# def bfs(graph, start, visited2):
#     queue = deque([start])

#     visited2[start] = True

#     while queue:
#         v = queue.popleft()
#         blist.append(v)

#         for i in sorted(graph[v]):
#             if not visited2[i]:
#                 queue.append(i)
#                 visited2[i] = True

# bfs(graph, v, visited2)
# print(*blist)

n, m, v = map(int, input().split())

graph = [[] for _ in range(n + 1)]

for _ in range(m):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)

visited = [False] * (n + 1)

dlist = []

def dfs(graph, visited, node):
    visited[node] = True
    dlist.append(node)

    for n in sorted(graph[node]):
        if not visited[n]:
            dfs(graph, visited, n)

dfs(graph, visited, v)
print(*dlist)

from collections import deque

visited2 = [False] * (n + 1)

blist = []

def bfs(graph, visited, node):
    queue = deque([node])
    visited[node] = True # queue에 들어간 노드는 방문 체크를 해줘야 한다.

    while queue:
        nxt_node = queue.popleft()
        blist.append(nxt_node)

        for n in graph[nxt_node]:
            if not visited[n]:
                queue.append(n)
                visited[n] = True

bfs(graph, visited2, v)
print(*blist)

