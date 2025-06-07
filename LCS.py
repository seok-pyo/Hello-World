a = input()
b = input()
table = [0] * max(len(a), len(b))

def lcs(i, j):
    if i == 0 or j == 0:
        return 0

    if a[i - 1] != b[j - 1]:
        return max(lcs(i - 1, j), lcs(i, j - 1))
    else:
        return max(lcs(i - 1, j), lcs(i, j - 1), lcs(i - 1, j - 1) + 1)

print(lcs(len(a), len(b)))
