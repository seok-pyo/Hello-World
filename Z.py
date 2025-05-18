import sys
# sys.stdin = open("input.txt", "r")
# 입력값 가져오기

# n, r, c = map(int, input().split())

# map = [[0] * ((2 ** n)) for _ in range((2 ** n))]

# ans = 0

# def z(n, x, y):
#     global ans

#     if n == 1:
#         map[int(y)][int(x)] = ans
#         ans+=1
#         return

#     z(n/2, x, y)
#     z(n/2, x + (n/2), y)
#     z(n/2, x, y + (n/2))
#     z(n/2, x + (n/2), y + (n/2))

# z(2 ** n, 0, 0)
# print(map[r][c])
# print(map)

# - - - - - - -

# n, r, c = map(int, input().split())

# ans, res = 0, 0

# def z(n, x, y):
#     global ans
#     global res

#     if int(y) == r and int(x) == c:
#         res = ans
#         return

#     # if x < c and y < r:
#     #     ans += 1
#     #     return

#     if n == 1:
#         ans+=1
#         return

#     z(n/2, x, y)
#     z(n/2, x + (n/2), y)
#     z(n/2, x, y + (n/2))
#     z(n/2, x + (n/2), y + (n/2))

# z(2 ** n, 0, 0)
# print(res)

# - - - - - - -

n, r, c = map(int, input().split())

res, cnt = 0, 0

def z(n:int, x, y):
    global cnt
    global res

    if y == r and x == c:
        print(cnt)
        return

    if n == 1:
        cnt+=1
        return

    if c < x and r < y:
        return
    if x + n <= c or y + n <= r: # 등호가 필요한 이유?
        cnt+=int(n**2)
    if x < c < x + n and y < r < y + n:
        z(n//2, x, y)
        z(n//2, x + (n//2), y)
        z(n//2, x, y + (n//2))
        z(n//2, x + (n//2), y + (n//2))

z(2 ** n, 0, 0)
# print(res)
