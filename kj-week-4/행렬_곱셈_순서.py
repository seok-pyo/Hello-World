n = int(input())

dp = [[0] * (n + 1) for _ in range(n + 1)]

matrix = [list(map(int, input().split())) for _ in range(n)]

if n == 1:
    print(0)
else:
    if n == 2:
        matrix[0][0] * matrix[0][1] * matrix[1][1]

    for len in range(2, n):
        for i in range(0, n - len):
            j =  i + len - 1
            for k in range(i, j - 1):
