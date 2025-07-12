n, m = map(int, input().split())

air = [list(map(int, input().split())) for _ in range(n)]

fuel = 0

for layer in air:
    for val in layer:
        fuel +=