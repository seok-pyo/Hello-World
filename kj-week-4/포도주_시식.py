# n = int(input())

# wine = []

# for _ in range(n):
#     wine.append(int(input()))

# dp = [0] * (n + 1)

# dp[0] = wine[0]
# dp[1] = wine[0] + wine[1]
# dp[2] = max(dp[1], wine[0] + wine[2], wine[1] + wine[2])

# for i in range(2, n):
#     dp[i] = max(max(dp[i-2] + wine[i], dp[i-1] + wine[i]), dp[i-1])

# print(dp[n-1])

n = int(input())

wine = []

for _ in range(n):
    wine.append(int(input()))

dp = [0] * (n + 1)

if n == 1:
    print(wine[0])
elif n == 2:
    print(wine[0] + wine[1])
else:
    dp[0] = wine[0]
    dp[1] = wine[0] + wine[1]
    dp[2] = max(dp[1], wine[0] + wine[2], wine[1] + wine[2])

    for i in range(3, n):
        dp[i] = max(dp[i-1], dp[i-2] + wine[i], dp[i-3] + wine[i-1] + wine[i])

    print(dp[n-1])