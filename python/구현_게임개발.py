n, m = map(int, input().split())
pox, poy, dir = map(int, input().split())
data = []
for _ in range(n):
    arr = list(map(int, input().split()))
    data.append(arr)

data[poy][pox] = 1

def game_test(pox, poy, dir):
    result = 0
    dix = [0, 1, 0, -1]
    diy = [-1, 0, 1, 0]

    while True:
        flag1 = False
        flag2 = False
        for i in range(4):
            dir = (dir + 3) % 4 # 왼쪽으로 회전
            if pox + dix[dir] < 0 or pox + dix[dir] >= m or poy + diy[dir] < 0 or poy + diy[dir] >= n:
                flag1 = True
                continue
            if data[poy + diy[dir]][pox + dix[dir]] != 0:
                flag2 = True
                continue
            pox = pox + dix[dir]
            poy = poy + diy[dir]
            data[poy][pox] = 1
            result += 1
            break
        if flag1 == True and flag2 == True:
            return result

print(game_test(pox, poy, dir))
