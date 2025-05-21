import sys
input = sys.stdin.readline

n = int(input())

# 배열 크기
arr = []
cnt = [0] * 10001

#
for _ in range(n):
    # arr.append(int(input()))
    cnt[int(input())] += 1

# for num in arr:
#     cnt[num] += 1

for i in range(10001):
    for _ in range(cnt[i]):
        print(i)

# EOFERROR 입력이 안 들어옴
# 테스트케이스가 없음