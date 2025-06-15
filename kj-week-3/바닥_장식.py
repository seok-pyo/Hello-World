n, m = map(int, input().split())

floor = [input() for _ in range(n)]

# dx = [-1, 1, 0, 0]
# dy = [0, 0, 1, -1]

# def dfs(x, y):
#     if floor[x][y]

visited = [[False] * m for _ in range(n)]

# count = 0

# for i in range(n):
#     for j in range(m):
#         if not visited[i][j]:
#             count += 1
#             if floor[i][j] == '-':
#                 nj = j
#                 while nj < m and floor[i][nj] == '-':
#                     visited[i][nj] = True
#                     nj += 1
#             else:
#                 ni = i
#                 while ni < n and floor[ni][j] == '|':
#                     visited[ni][j] = True
#                     ni += 1

def dfs(x, y, symbol):
    visited[x][y] = True
    if symbol == '-':
        ny = y + 1
        if ny < m and not visited[x][ny] and floor[x][ny] =='-':
            dfs(x, ny, symbol)
    else:
        nx = x + 1
        if nx < n and not visited[nx][y] and floor[nx][y] == '|':
            dfs(nx, y, symbol)

count = 0

for i in range(n):
    for j in range(m):
        if not visited[i][j]:
            dfs(i, j, floor[i][j])
            count += 1

print(count)



