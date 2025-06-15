n, k = map(int, input().split())

items = [list(map(int, input().split())) for _ in range(n)]

print(items)

dp = [0] * (n + 1)

for item in items:
    for j in range(k, 0, -1):
        if j - item[0] > 0:
            dp[j] = dp[j - item[0]] + item[1]

print(dp)