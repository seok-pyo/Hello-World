n,m = map(int, input().split())
graph = []
for _ in range(n):
    graph.append(list(map(int, input())))

result = 0

def DFS(x, y):
    if x <= -1 or x >= n or y <= -1 or y >= m:
        return False
    if graph[x][y] == 0:
        graph[x][y] = 1
        DFS(x + 1, y)
        DFS(x, y + 1)
        DFS(x - 1, y)
        DFS(x, y - 1)
        return True

    return False

for i in range(n):
    for j in range(m):
        if DFS(i, j):
            result += 1

print(result)