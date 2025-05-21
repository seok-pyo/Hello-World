# t = int(input())
# cnt = 0

# flag_a = [False] * t
# flag_b = [False] * (2*t - 1)
# flag_c = [False] * (2*t - 1)

# def set2(n):
#     global cnt

#     if n == t:
#         cnt += 1
#         return

#     for i in range(t):
#         if not flag_a[i] and not flag_b[n + i] and not flag_c[n - i + (t - 1)]:
#             flag_a[i] = True
#             flag_b[n + i] = True
#             flag_c[n - i + (t - 1)] = True
#             set2(n + 1)
#             flag_a[i] = False
#             flag_b[n + i] = False
#             flag_c[n - i + (t - 1)] = False

# set2(0)

# print(cnt)


n = int(input())
answer = 0
v1 = [False] * n
v2 = [False] * (2*n-1)
v3 = [False] * (2*n-1)
def dfs(row):
    global answer
    if row == n:
        answer += 1
        return
    # count = 0
    for col in range(n):
        # if v1[col] == v2[row+col] == v3[row-col+(n-1)] == False:
        if not v1[col] and not v2[row+col] and not v3[row-col+(n-1)]:
            v1[col] = True
            v2[row+col] = True
            v3[row-col+(n-1)] = True
            dfs(row+1)
            v1[col] = False
            v2[row+col] = False
            v3[row-col+(n-1)] = False
    # return count
dfs(0)
print(answer)