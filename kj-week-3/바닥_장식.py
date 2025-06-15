n, m = map(int, input().split())

floor = [input() for _ in range(n)]

# dx = [-1, 1, 0, 0]
# dy = [0, 0, 1, -1]

# def dfs(x, y):
#     if floor[x][y]

visited = [[False] * m for _ in range(n)]

count = 0

for i in range(n):
    for j in range(m):
        if not visited[i][j]:
            count += 1
            if floor[i][j] == '-':
                nj = j
                while nj < m and floor[i][nj] == '-':
                    visited[i][nj] = True
                    nj += 1
            else:
                ni = i
                while ni < n and floor[ni][j] == '|':
                    visited[ni][j] = True
                    ni += 1

print(count)

