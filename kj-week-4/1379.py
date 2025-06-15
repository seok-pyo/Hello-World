# 1379 강의실 2
# 풀이 못함

n = int(input())

lecture = []

for _ in range(n):
    lec_num, start, end = map(int, input().split())
    lecture.append((start, end, lec_num))

lecture.sort()

print(lecture)