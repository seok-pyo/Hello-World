n, k = map(int, input().split())
cnt = 0
while n != 1:
    if n % k == 0:
        n = n / k
    else:
        n -= 1
    cnt += 1

print(cnt)

while True:
    target = (n // k) * k
    cnt += (n - target)
    n = target

    if n < k:
        break
    cnt += 1
    n //= k

cnt += (n - 1) # n을 1로 만드는 횟수를 추가하는 로직. 중요!
print(cnt)
