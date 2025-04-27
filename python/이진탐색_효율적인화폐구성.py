from itertools import combinations_with_replacement

n, target = map(int, input().split())
arr = []
for i in range(n):
    arr.append(int(input()))

def solution():
    units = []
    for coin in arr:
        if coin <= target:
            units.append(coin)

    if len(units) == 0: return -1

    table = [(units)]

    while True:
        combi = []
        for (i, unit) in enumerate(table):
            for am in combinations_with_replacement(unit):
                if am == target:
                    return i + 1





