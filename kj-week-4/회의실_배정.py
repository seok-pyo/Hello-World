n = int(input())

meetings = []

for _ in range(n):
    meetings.append(list(map(int, input().split())))

# 원소를 기준을 가지고 정렬하기
meetings.sort(key=lambda x: (x[1], x[0]))

# 그리디 풀이
result = 1

pre = meetings[0][1]

def count():
    global pre
    global result
    for m in range(1, len(meetings)):
        if pre <= meetings[m][0]:
            pre = meetings[m][1]
            result += 1

count()

print(result)

# DP 시도
# table = [0] * n

# for i in range(n - 1 , 0, -1):
#     for j in range(i - 1, 0, -1):
#         if meetings[j][1] < meetings[i][0]:
#             table[i] = max(table[:j]) + 1

# print(table)