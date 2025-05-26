from collections import deque

n = int(input())
q = deque([])

for _ in range(n):
    direc = input().split()

    if direc[0] == 'push':
        q.append(direc[1])
    elif direc[0] == 'pop':
        if len(q) == 0:
            print(-1)
        else:
            first = q.popleft()
            print(first)

    elif direc[0] == 'size':
        print(len(q))
    elif direc[0] == 'empty':
        if len(q) == 0:
            print(1)
        else:
            print(0)
    elif direc[0] == 'front':
        if len(q) ==0:
            print(-1)
        else:
            print(q[0])
    elif direc[0] == 'back':
        if len(q) == 0:
            print(-1)
        else:
            print(q[-1])
