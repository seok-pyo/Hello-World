n, m, v = map(int, input().split())

alist = [[] for _ in range(n + 1)]
visited = [ False ] * (n + 1)

for _ in range(m):
    s, e = map(int, input().split())
    alist[s].append(e)
    alist[e].append(s)

def dfs(alist, v, visited):
    visited[v] = True
    print(v)

    for i in sorted(alist[v]):
        if not visited[i]:
            dfs(alist, i, visited)

dfs(alist, v, visited)
# def bfs():