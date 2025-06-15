# seq_1 = input()
# seq_2 = input()

# table = [[0] * (len(seq_1) + 1) for _ in range(len(seq_2) + 1)]

# # for i, item in enumerate(seq_1):
# #     if seq_2[0] == item:
# #         table[0][i + 1] = 1
# # for j, item in enumerate(seq_2):
# #     if seq_1[0] == item:
# #         table[j + 1][0] = 1

# for i, s1 in enumerate(seq_1, start=1):
#     for j, s2 in enumerate(seq_2, start=1):
#         if s1 == s2:
#             table[j][i] = table[j-1][i-1] + 1
#         else:
#             table[j][i] = max(table[j][i-1], table[j-1][i])

# # print(table)
# print(table[len(seq_2)][len(seq_1)])

# - 2차

a = input()
b = input()

table = [[0] * (len(b) + 1) for _ in range(len(a) + 1)]

for i, c1 in enumerate(a, start=1):
    for j, c2 in enumerate(b, start=1):
        if c1 == c2:
            table[i][j] = table[i-1][j-1] + 1
        else:
            table[i][j] = max(table[i-1][j], table[i][j-1])

# print(table)
print(table[len(a)][len(b)])

# - 3차

# a = input()
# b = input()

# table = [[0] * (len(b) + 1) for _ in range(len(a) + 1)]

# # for i in range(len(a)):
# #     if a[i] == b[0]:
# #         table[i + 1][0] = 1

# # for j in range((len(b))):
# #     if b[j] == a[0]:
# #         table[0][j + 1] = 1

# for i, c1 in enumerate(a, start=1):
#     for j, c2 in enumerate(b, start=1):
#         if c1 == c2:
#             table[i][j] = table[i-1][j-1] + 1
#         else:
#             table[i][j] = max(table[i-1][j], table[i][j-1])

# # print(table)
# print(table[len(a)][len(b)])