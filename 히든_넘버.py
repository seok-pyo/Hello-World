l = int(input())
s = input()
cur = 0
res = 0
building = True

for c in s:
    if c.isdigit():
        cur = cur * 10 + int(c)
        building = True
    else:
        if building:
            res += cur
            cur = 0
            building = False

res += cur

print(res)




