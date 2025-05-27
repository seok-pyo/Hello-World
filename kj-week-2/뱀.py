from collections import deque

n = int(input())
a = int(input())

apples = set()

for _ in range(a):
    r, c = map(int, input().split())
    apples.add((r - 1, c - 1))

o = int(input())

directions = deque()

for _ in range(o):
    directions.append(input().split())

seconds = 0
x, y = 0, 0
queue = deque()
queue.append((x, y))

pos = 0
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

direc_cnt, direc = directions.popleft()
direc_cnt = int(direc_cnt)

while True:
    seconds += 1
    x += dx[pos]
    y += dy[pos]

    if seconds == int(direc_cnt):
        if direc == 'D':
            pos = (pos + 1) % 4
        else:
            pos = (pos - 1) % 4

        if directions:
            direc_cnt, direc = directions.popleft()
            direc_cnt = int(direc_cnt)

    if (x, y) in queue:
        break

    if x >= n or y >= n or x < 0 or y < 0:
        break

    if (x, y) in apples:
        apples.remove((x, y))
        queue.append((x, y))
    else:
        queue.append((x, y))
        queue.popleft()

print(seconds)
