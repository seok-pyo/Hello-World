n = int(input())

# 시간초과, 소수를 먼저 판별해야 한다고 생각. 반복해서 출력해야 한다는 생각.
# def isPrime(n):
#     for i in range(2, n):
#         if n % i == 0:
#             return False
#     return True

# def solution(n):
#     res = n
#     if n == 1: return 0
#     for i in range(2, n + 1):
#         if isPrime(i):
#             while res % i == 0:
#                 print(i)
#                 res = (res / i)

# solution(n)

def solution(n):
    for i in range(2, int(n // 2 + 1)):
        while n % i == 0:
            print(i)
            n = n // i

    if n > 1:
      print(n)

solution(n)


