num = int(input())

res = 0
cnt = 0
n = 0
tar = num

def cycle(num):
    global cnt
    global n

    if num == 0:
        cnt += 1
        return

    if tar == n:
        return cnt

    m = num // 10
    r = num % 10
    n = m + r

    n = (r * 10) + (n % 10)
    cnt += 1
    cycle(n)


cycle(num)
print(cnt)






