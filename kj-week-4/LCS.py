seq_1 = input()
seq_2 = input()

table = [[0] * (len(seq_1) + 1) for _ in range(len(seq_2) + 1)]

for i, s1 in enumerate(seq_1):
    for j, s2 in enumerate(seq_2):
        if s1 == s2:
            table[i][j] = max(table[i-1][j], table[i][j-1]) + 1
        else:
            table[i][j] = max(table[i-1][j], table[i][j-1])

print(table[len(seq_1) -1][len(seq_2) - 1])

