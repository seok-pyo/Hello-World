pos = input()
c, r = pos[0], int(pos[1])

dx = [0, 2, 0, -2]
dy = [-2, 0, 2, 0]

cnt = 0

for i in range(4):
    nx = dx[i] + c
    ny = dy[i] + r

    if nx < int('a') or nx > int('h'):
        continue
    if ny < 1 or ny > 8:
        continue

    for _ in range(2):
        if nx - 1 < int('a') or nx + 1 > int('h'):
            continue
        if ny - 1 < 1 or ny + 1 > 8:
            continue
        cnt += 1
