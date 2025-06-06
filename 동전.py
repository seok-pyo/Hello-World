t = int(input())

for _ in range(t):
    n = int(input())
    coins = list(map(int, input().split()))
    target = int(input())

    table = [0] * (target + 1)

    table[0] = 1

    # for c in coins:
    #     table[c] = 1

    # for i in range(1, len(table)):
    #     for coin in coins:
    #         if (i - coin) > 0:
    #             table[i] += table[i - coin]

    for coin in coins:
        for i in range(1, len(table)):
            if (i - coin) >= 0:
                table[i] += table[i - coin]

    print(table[target])