x = input()

res = 0

if len(x) > 2 and x[1] in ('x', 'X'):
    pa = x[2:].lower()
    for i in range(len(pa) - 1, -1, -1):
        exp = len(pa) - 1 - i
        if pa[i] == 'a':
            res += (10 * (16 ** (exp)))
        elif pa[i] == 'b':
            res += (11 * (16 ** (exp)))
        elif pa[i] == 'c':
            res += (12 * (16 ** (exp)))
        elif pa[i] == 'd':
            res += (13 * (16 ** (exp)))
        elif pa[i] == 'e':
            res += (14 * (16 ** (exp)))
        elif pa[i] == 'f':
            res += (15 * (16 ** (exp)))
        else:
            res += int(pa[i]) * (16 ** exp)
elif x[0] == '0' and len(x) > 1:
        pa = x[1:]
        for i in range(len(pa) - 1, -1, -1):
            res += int(pa[i]) * (8 ** (len(pa) - i - 1))
else:
        res = int(x)

print(res)