n = int(input())

dp = [0] * (n + 1)

dp[1] = 1
dp[2] = 2
dp[3] = 3

for i in range(3, n):
    dp[i] = max(dp[i - 1] + 1, dp[i - 2] * 2, dp[i - 1] * 2)

print(dp)