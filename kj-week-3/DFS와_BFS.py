n, m, v = map(int, input().split())

alist = [[] for _ in range(n + 1)]
visited = [ False ] * (n + 1)

dfs_list = []

for _ in range(m):
    s, e = map(int, input().split())
    alist[s].append(e)
    alist[e].append(s)

def dfs(alist, v, visited):
    visited[v] = True
    dfs_list.append(v)

    for i in sorted(alist[v]):
        if not visited[i]:
            dfs(alist, i, visited)

dfs(alist, v, visited)
print(*dfs_list)

from collections import deque

visited2 = [False] * (n + 1)
bfs_list = []

def bfs(alist, start, visited2):
    queue = deque([start])

    visited2[start] = True

    while queue:
        v = queue.popleft()
        bfs_list.append(v)

        for i in sorted(alist[v]):
            if not visited2[i]:
                queue.append(i)
                visited2[i] = True

bfs(alist, v, visited2)
print(*bfs_list)


