n, m = map(int, input().split())
ice = []
for _ in range(n):
    ice.append(list(map(int, input())))

visited = [[False] * m for i in range(n)]
result = 0

def DFS(x,y,visited):
    if visited[y][x]:
        return

    if ice[y][x] == 0:
        DFS(x+1, y, visited)
        visited[y][x+1] = True
    if ice[y+1][x] == 0:
        DFS(x, y+1, visited)
        visited[y+1][x] = True
    if ice[y][x-1] == 0:
        DFS(x-1, y, visited)
        visited[y][x-1] = True
    if ice[y-1][x] == 0:
        DFS(x, y-1, visited)
        visited[y-1][x] = True

for i in range(n):
    for j in range(m):
        if ice[i][j] == 0:
            result += 1
            DFS(j, i, visited)

