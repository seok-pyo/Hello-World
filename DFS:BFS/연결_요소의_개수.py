n, m = map(int, input().split())

graph = [[] for _ in range(n + 1)]

for _ in range(m):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)

visited = [False] * (n + 1)

def dfs(node):
    visited[node] = True

    for i in graph[node]:
        if not visited[i]:
            dfs(i)

def count():
    cnt = 0

    for i in range(1, n + 1):
        if not visited[i]:
            dfs(i)
            cnt += 1

    return cnt

print(count())

# 왜 못 풀었는가?
# 해결 방법은?