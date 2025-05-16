n, x = map(int, input().split())
a = [int(x) for x in input().split()]
result = []
for i in a:
    if i < x:
        result.append(str(i))

print(' '.join(result))
