def set(i, n, cnt):
    pos = [0] * n
    flaga = [False] * n
    flagb = [False] * (n * 2)
    flagc = [False] * (n * 2)

    for j in range(n):
        if not flaga[j] and not flagb[i + j] and not flagc[i - j + (n - 1)]:
            pos[i] = j
            if i == (n - 1):
                cnt += 1
                return
            else:
                flaga[j] = flagb[i + j] = flagc[i - j + (n - 1)] = True
                set(i + 1, n, cnt)
                flaga[j] = flagb[i + j] = flagc[i - j + (n - 1)]= False

def sol():
    n = int(input())
    result = 0

    set(0, n, result)

    print(result)

sol()



