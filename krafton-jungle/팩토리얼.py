# import sys
# sys.setrecursionlimit(10**6)

# n = int(input())

# def fac(n):
#     if n == 1:
#         return 1

#     return n * fac(n-1)

# print(fac(n))

n = int(input())

def fac(n):
    result = 1
    for i in range(1, n+1):
        result *= i

    return result

print(fac(n))