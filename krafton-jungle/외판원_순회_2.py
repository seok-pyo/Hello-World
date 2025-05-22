import sys
input = sys.stdin.readline

from itertools import permutations

n = int(input())
city = [list(map(int, input().split())) for _ in range(n)]

min_val = 999999999

def visit(n):
    global min_val

    # if n == 2:
    #     min_val = city[0][1] + city[1][0]
    #     return

    for permu in permutations(range(n - 1)):
        val = 0
        if city[n - 1][permu[0]] == 0 or city[permu[-1]][n - 1] == 0:
            continue
        val += city[n - 1][permu[0]]
        val += city[permu[-1]][n - 1]
        for i in range(1, len(permu)):
            if city[permu[i - 1]][permu[i]] == 0:
                val = float("inf")
                break
            val += city[permu[i - 1]][permu[i]]

        min_val = min(min_val, val)

visit(n)
print(min_val)
