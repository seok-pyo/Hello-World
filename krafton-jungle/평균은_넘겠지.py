import math

c = int(input())
for _ in range(c):
    cnt = 0
    sum = 0
    score = list(int(x) for x in input().split())
    for i in score[1:]:
        sum += i
    ave = sum / score[0]
    for j in score:
        if j > ave:
            cnt += 1
    result = cnt / score[0] * 1000
    result = round(result, 3)
    print(f'{"%5.3f" % result}%')
