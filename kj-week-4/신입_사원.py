t = int(input())

for _ in range(t):
    n = int(input())
    lst = [0] * (n + 1)

    for _ in range(n):
        x, y = input().split()
        lst[int(x)] = int(y)

    min = float('inf')
    cnt = 0
    for n in range(1, n + 1):
        if lst[n] < min:
            cnt += 1
            min = lst[n]

    print(cnt)