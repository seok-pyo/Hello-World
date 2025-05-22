m = -999999999
index = 0
for i in range(9):
    num = int(input())
    if m < num:
        m = num
        index = i


print(m)
print(index + 1)