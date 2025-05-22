n = int(input())
case = []
sum = 0
cnt = 0

for _ in range(n):
    case.append(int(input()))

def otw(sum, tar):
    global cnt
    if sum > tar:
        return

    if sum == tar:
        cnt += 1

    for i in range(1, 4):
        otw(sum + i, tar)

for c in case:
    # global cnt
    cnt = 0
    otw(0, c)
    print(cnt)






