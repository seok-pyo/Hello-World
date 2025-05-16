a = []
t = int(input())
for _ in range(t):
    a.append(int(input()))

def isPrime(n):
    if n == 1: return False
    for i in range(2, n):
        if n % i == 0: return False
    return True

result = []
for i in a:
    for j in range(4, i):
        rem = i - j
        if isPrime(rem) and isPrime(j):
            result.append((j, rem))

answer = [0, 0]

m = 999999999
for k in result:
    a, b = k
    if abs(a - b) < m:
        m = abs(a - b)
        answer[0] = str(a)
        answer[1] = str(b)

if answer[0] < answer[1]:
    print(' '.join(answer))
else:
    print(' '.join(answer))
