from collections import deque

n = int(input())
a = int(input())

apples = []

for _ in range(a):
    apples.append(input().split())

o = int(input())

directions = deque()

for _ in range(o):
    directions.append(input().split())

seconds = 0
x, y = 0, 0
queue = deque()
queue.append((x, y))

pos = 0

direc_cnt, direc = directions.popleft()
direc_cnt = int(direc_cnt)

while True:
    seconds += 1

    if pos % 4 == 0:
        y += 1
    elif pos % 4 == 1:
        x -= 1
    elif pos % 4 == 2:
        x += 1
    elif pos % 4 == 3:
        y -= 1

    direc_cnt -= 1

    if direc_cnt == 0:
        if direc == 'D':
            pos += 1
            if pos % 4 == 0:
                y += 1
            elif pos % 4 == 1:
                y += 1
            elif pos % 4 == 2:
                y -= 1
            elif pos % 4 == 3:
                x += 1
        else:
            pos -= 1
            if pos % 4 == 0:
                x -= 1
            elif pos % 4 == 1:
                y -= 1
            elif pos % 4 == 2:
                y += 1
            elif pos % 4 == 3:
                x += 1

        direc_cnt, direc = directions.popleft()
        direc_cnt = int(direc_cnt)

    if (x, y) in queue:
        break

    if x > n or y > n or x < 0 or y < 0:
        break

    if [str(x), str(y)] in apples:
        queue.append((x, y))
    else:
        queue.append((x, y))
        queue.popleft()

print(seconds)
