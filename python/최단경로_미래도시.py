n, m = map(int, input().split())
INF = 1e9
graph = [[INF] * (n + 1) for _ in range(n + 1)]

for i in range(n + 1):
    for j in range(n + 1):
        if i == j:
            graph[i][j] = 0

for i in range(m):
    row, col = map(int, input().split())
    graph[row][col] = 1
    # 양방향으로 가는 것의 비용이 동일하게 1이다. # 놓친 부분 참고!
    graph[col][row] = 1

x, k = map(int, input().split())

for c in range(1, n + 1):
    for a in range(1, n + 1):
        for b in range(1, n + 1):
            graph[a][b] = min(graph[a][b], graph[a][c] + graph[c][b])

distance = graph[1][k] + graph[k][x]
# 값이 무한대 보다 큰 경우(경로가 없는 경우 대응)

if distance >= INF:
    print('INFINITY')
else:
    print(graph[1][k] + graph[k][x])




