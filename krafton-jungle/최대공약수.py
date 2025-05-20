a, b = map(int, input().split())

nA = 1
nB = 1
m = 1

for _ in range(a - 1):
    nA = nA * 10 + 1

for _ in range(b - 1):
    nB = nB * 10 + 1

length = min(a, b)

for _ in range(length - 1):
    m = m * 10 + 1

while True:
    if m == 1:
        print(1)
        break
    # if int(nA) % int(m) == 0 and int(nB) % int(m) == 0:
    #     print(m)
    #     break
    if nA % m == 0 and nB % m == 0:
        print(m)
        break
    m = m // (10 ** len(m))