import sys
sys.setrecursionlimit(10**6)

t = int(input())

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def dfs(x, y, graph):
    if(x < 0 or y < 0 or x >= n or y >= m):
        return
    if graph[x][y] == 0:
        return

    graph[x][y] = 0

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        dfs(nx, ny, graph)
        # if(nx > 0 and ny > 0 and nx < n and ny < m): 기저 조건으로 범위를 확인하기 때문에
            # 여기서도 불필요하게 확인할 필요는 없다.
            # graph[nx][ny] = 0 방문 처리는 위에서

for _ in range(t):
    m, n, k = map(int, input().split())
    graph = [[0] * (m) for _ in range(n)]
    cnt = 0

    for _ in range(k):
        y, x = map(int, input().split())
        graph[x][y] = 1

    for i in range(n):
        for j in range(m):
            if(graph[i][j] == 1):
                cnt += 1
                # graph[i][j]가 1일 때 dfs 실행
                dfs(i, j, graph)

    print(cnt)



