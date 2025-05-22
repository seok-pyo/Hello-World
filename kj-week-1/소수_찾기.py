n = int(input())
a = map(int, input().split())

def isPrime(n):
    if n == 1: return False
    for i in range(2, n):
        if n % i == 0: return False
    return True


def solve():
    cnt = 0
    for ele in a:
        if isPrime(ele): cnt += 1

    return cnt

print(solve())


