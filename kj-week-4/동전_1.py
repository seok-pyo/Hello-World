n, k = map(int, input().split())

coins = [int(input()) for _ in range(n)]

cnt = 0

check = [False] * (n + 1)

def dfs(sum):
    global cnt
    if sum > k:
        return

    if sum == k:
        cnt += 1
        return

    for c in range(len(coins)):
        if not check[c]:
            check[c] = True
            dfs(sum + coins[c])
            check[c] = False

dfs(0)

print(cnt)