# # 14916 거스름돈

# money = int(input())

# dp = [0] * (money + 1)

# if money == 1:
#     print(-1)
# elif money == 2:
#     print(1)
# elif money == 3:
#     print(-1)
# elif money == 4:
#     print(2)
# elif money == 5:
#     print(1)
# else:
#     dp[1] = float('inf')
#     dp[2] = 1
#     dp[3] = float('inf')
#     dp[4] = 2
#     dp[5] = 1

#     for i in range(6, money + 1):
#         m1 = dp[i-2] + 1
#         m2 = dp[i-5] + 1
#         dp[i] = min(m1, m2)

#     print(dp[money])

from sys import stdin

input = lambda: stdin.readline().strip()

coins = [2, 5]
n = int(input())

# dp 테이블 만들기 (1 index)
dp = [0] * (n + 1)

for i in range(len(coins)):
    for j in range(coins[i], n + 1):
        if j % coins[i] == 0:
            dp[j] = dp[j - coins[i]] + 1
        elif dp[j - coins[i]] != 0:
            dp[j] = dp[j - coins[i]] + 1

for i in range(len(dp)):
    if dp[i] == 0:
        dp[i] = -1

print(dp[n])