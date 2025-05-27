a, b, c = map(int, input().split())

result = 1

def dc(number, expo):
    if expo == 0:
        return 1

    if expo == 1:
        return number % c

    half = dc(number, expo // 2)

    if expo % 2 == 0:
        return (half * half) % c
    else:
        return ((half * half) * number) % c

print(dc(a, b))