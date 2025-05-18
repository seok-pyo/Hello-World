n, r, c = map(int, input().split())

map = [[0] * ((2 ** n)) for _ in range((2 ** n))]

ans = 0

def z(n, x, y):
    global ans

    if n == 1:
        map[int(y)][int(x)] = ans
        ans+=1
        return

    z(n/2, x, y)
    z(n/2, x + (n/2), y)
    z(n/2, x, y + (n/2))
    z(n/2, x + (n/2), y + (n/2))

z(2 ** n, 0, 0)
print(map[r][c])
# print(map)

