from collections import deque

n, m = map(int, input().split())
graph = []
for _ in range(n):
    graph.append(list(map(int, input())))

def BFS(x, y):
    q = deque([(x, y)])
    # graph[x][y] = 0 # 이건 미로에서는 불필요, 문제의 요구사항을 잘 읽고 파악해야 한다!!

    while q:
        x, y = q.popleft()
        for dx, dy in [(-1, 0), (0, -1), (1, 0), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y] + 1
                q.append((nx, ny))

    return graph[n-1][m-1]

print(BFS(0,0))




