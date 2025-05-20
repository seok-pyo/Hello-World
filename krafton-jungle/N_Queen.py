t = int(input())
cnt = 0

flag_a = [False] * t
flag_b = [False] * (2*t - 1)
flag_c = [False] * (2*t - 1)

def set2(n):
    global cnt

    if n == t:
        cnt += 1
        return

    for i in range(t):
        if not flag_a[i] and not flag_b[n + i] and not flag_c[n - i + (t - 1)]:
            flag_a[i] = True
            flag_b[n + i] = True
            flag_c[n - i + (t - 1)] = True
            set2(n + 1)
            flag_a[i] = False
            flag_b[n + i] = False
            flag_c[n - i + (t - 1)] = False

set2(0)

print(cnt)


