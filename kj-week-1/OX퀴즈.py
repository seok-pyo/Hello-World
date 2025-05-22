n = int(input())
for i in range(n):
    s = input()
    score = 0
    enr = 0
    for j in s:
        if j == 'O':
            enr += 1
            score += enr
        else:
            enr = 0
    print(score)
