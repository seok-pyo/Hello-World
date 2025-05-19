# import sys
# sys.setrecursionlimit(10**8)

# n = int(input())

# def fibo(n):
#     if n == 0:
#         return 0

#     if n == 1:
#         return 1

#     return fibo(n - 1) + fibo(n - 2)

# print(fibo(n))

n = int(input())

def fibo(n):
    arr = [0] * (n + 1)
    arr[0] = 0
    arr[1] = 1

    for i in range(2, n + 1):
        arr[i] = arr[i - 1] + arr[i - 2]

    print(arr[n])

fibo(n)
