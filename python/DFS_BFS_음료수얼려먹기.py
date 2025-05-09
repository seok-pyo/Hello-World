from collections import deque

n, m = map(int, input().split())
mold = []
dx = [0, 1, 0, -1]
dy = [-1, 0, 1, 0]
visited = [[False] * m for _ in range(n)]

result = 0

def bfs(start, visited):
    q = deque([start])
    flag = False
    # BFS를 구현할 때에는 처음에 시작 노드의 방문 여부를 체크하고 실행해야 한다.

    while q:
        v = q.popleft()
        # if not visited[v[0]][v[1]]: # 이렇게 하면 중복은 막을 수 있지만, 시작노드의 중복은 막을 수 없다.
        visited[v[0]][v[1]] = True
            # visited[start[0]][start[1]] = True # while문 안에서 시작 노드의 방문여부를 체크하면 안된다.
        flag = True
        for i in range(4):
            ny = v[0] + dy[i]
            nx = v[1] + dx[i]
            if nx >= 0 and nx < m and ny >= 0 and ny < n and not visited[ny][nx] and mold[ny][nx] == 0:
                # visited[ny][nx]로 방문 여부를 확인한다.
                # mold 배열의 방문 여부 확인을 제외하면, 벽도 방문하게 된다.
                visited[ny][nx] = True
                q.append((ny, nx))

    return flag

for _ in range(n):
    mold.append(list(map(int, list(input().strip()))))

for i in range(n):
    for j in range(m):
        if mold[i][j] == 0: # 이미 방문한 곳은 제외
            if bfs((i, j), visited): result += 1

print(result)




