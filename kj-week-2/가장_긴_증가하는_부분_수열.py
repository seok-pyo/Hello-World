# n = int(input())

# parts = list(map(int, input().split()))

# result = -float('inf')

# for i in range(n):
#     cnt = 0
#     for j in range(i, n):
#         if parts[i] < parts[j]:
#             cnt += 1
#     result = max(result, cnt)

# print(result)

# n = int(input())

# parts = list(map(int, input().split()))
# table = [0] * 1001

# for i in range(n):
#     table[i] = 1
#     for j in range(0, i):
#         if parts[i] > parts[j] and table[i] < table[j] + 1:
#             table[i] = table[j] + 1

# print(max(table))


# lis = [0] * 1001
# pos = [0] * 1001

# n = int(input())

# numbers = list(map(int, input().split()))

# # for i in len(numbers):
# #     if numbers[i] > lis[i]:
# #         lis.append(lis[i])
# #     else

import bisect
