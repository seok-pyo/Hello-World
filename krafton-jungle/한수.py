def sol():
    n = int(input())
    cnt = 0

    e1 = 0
    e2 = 0
    e3 = 0
    d1 = 0
    d2 = 0

    for i in range(1, n + 1):
        if len(str(i)) < 3:
            cnt += 1
        else:
            e1 = i // 100
            e2 = (i % 100) // 10
            e3 = (i % 10) % 10
            d1 = e1 - e2
            d2 = e2 - e3
            if d1 == d2: cnt+= 1

    return cnt

print(sol())






