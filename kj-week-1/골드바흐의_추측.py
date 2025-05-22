a = []
t = int(input())
for _ in range(t):
    a.append(int(input()))

def isPrime(n):
    if n <= 1: return False
    for i in range(2, n):
        if n % i == 0: return False
    return True

for i in a:
    flag = False
    num = i // 2
    while True:
        if isPrime(num) and isPrime(i - num):
            print(str(num) + ' ' + str(i - num))
            break
        num -= 1



