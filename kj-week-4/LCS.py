seq_1 = input()
seq_2 = input()

table = [[0] * (len(seq_1) + 1) for _ in range(len(seq_2) + 1)]

# for i, item in enumerate(seq_1):
#     if seq_2[0] == item:
#         table[0][i + 1] = 1
# for j, item in enumerate(seq_2):
#     if seq_1[0] == item:
#         table[j + 1][0] = 1

for i, s1 in enumerate(seq_1, start=1):
    for j, s2 in enumerate(seq_2, start=1):
        if s1 == s2:
            table[j][i] = table[j-1][i-1] + 1
        else:
            table[j][i] = max(table[j][i-1], table[j-1][i])

# print(table)
print(table[len(seq_2)][len(seq_1)])