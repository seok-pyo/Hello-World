n, m, k = map(int, input().split())
array = list(map(int, input().split()))
array.sort(reverse=True)
f = array[0]
s = array[1]
result = 0
for i in range(1, m+1):
    result += f if i % (k+1) != 0 else s
print(result)