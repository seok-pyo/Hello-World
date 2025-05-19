from itertools import permutations

n = int(input())

arr = map(int, input().split())

mv = -999999999
for i in permutations(arr):
    mn = 0
    for j in range(len(i) - 1):
        mn += abs(i[j + 1] - i[j])

    mv = max(mv, mn)
print(mv)

