from collections import deque

n, m = map(int, input().split())
# maze = [input() for _ in range(n)]
maze = [list(map(int, input().strip())) for _ in range(n)] # strip을 안해도 같은 결과 아닌가?

def getWay():
    result = 0
    dx = [-1, 0, 1, 0]
    dy = [0, -1, 0, 1]

    q = deque()
    q.append((0,0))

    while q:
        x, y = q.pop()
        if maze[x][y] == 0:
            continue
        for i in nx:
            for j in ny:
                if x + j < 0 or x + j > n or y + i < 0 or y + i > m:
                    continue
                maze[x + j][y + i] = 0
                q.append((x+j, y+i))

                result += 1

    return result


