n = int(input())
store = list(map(int, input().split()))

table = [0] * 101

for i in range(1, len(store)):
    sum = 0
    table[i] = store[i]
    for j in range(i-1, 0, -1):
        sum += store[j]
    table[i] = max(sum, table[i])

print(table[n-1])

