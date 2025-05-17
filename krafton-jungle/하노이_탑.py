n = int(input())
c = [0] * 100

def hanoi(n, start, mid, end):
    if n == 0:
        return

    hanoi(n - 1, start, end, mid)
    print(start, end)
    hanoi(n - 1, mid, start, end)

def count(n):
    c[0] = 1
    for i in range(1, n):
        c[i] = c[i - 1] * 2 + 1

count(n)

def sol(n):
    if n < 20:
        print(c[n - 1])
        hanoi(n, 1, 2, 3)
    else:
        print(n * 2 + 1)

sol(n)
