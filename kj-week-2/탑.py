# n = int(input())

# tower = list(map(int, input().split()))
# result = [0] * n

# def razar():
#     for i in range(n - 1, -1, -1):
#         for j in range(i, -1, -1):
#             if tower[i] < tower[j]:
#                 if result[i] == 0:
#                     result[i] = j + 1

# razar()
# print(' '.join(map(str, result)))

n = int(input())

tower = list(map(int, input().split()))
result = [0] * n

stack = []

for i in range(n):
    while stack and stack[-1][1] < tower[i]:
        stack.pop()

    if stack:
        result[i] = stack[-1][0] + 1

    stack.append((i, tower[i]))

print(' '.join(map(str, result)))