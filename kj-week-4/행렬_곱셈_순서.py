n = int(input())

dp = [[0] * (n + 1) for _ in range(n + 1)]

matrix = [list(map(int, input().split())) for _ in range(n)]

if n == 1:
    print(0)
else:
    for len in range(2, n + 1):
        for i in range(n - len + 1):
            j =  i + len - 1
            dp[i][j] = float('inf')
            for k in range(i, j):
                cost = dp[i][k] + dp[k+1][j] + (matrix[i][0] * matrix[k][1] * matrix[j][1])
                dp[i][j] = min(dp[i][j], cost)

    print(dp[0][n-1])