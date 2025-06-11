n = int(input())

numbers = list(map(int, input().split()))

dp = [1] * (n)

for i in range(1, n):
    for j in range(i):
        if numbers[j] < numbers[i]:
            dp[i] = max(dp[j] + 1, dp[i])

print(max(dp))