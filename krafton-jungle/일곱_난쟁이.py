seven = []
for _ in range(9):
    seven.append(int(input()))

flag=False

sv = sum(seven)
for i in range(8):
    if flag: break
    for j in range(i + 1, 9):
        if sv - (seven[i] + seven[j]) == 100:
            a = seven[i]
            b = seven[j]
            # print(seven)
            # print(seven[i], seven[j])
            seven.remove(a)
            seven.remove(b)
            # print(seven)
            flag = True
            break

seven.sort()

for i in seven:
    print(i)


