import sys
input = sys.stdin.readline

n = int(input())

stick = []
cnt = 0

for _ in range(n):
    stick.append(int(input()))

baro = stick[-1]

for i in range(len(stick) - 1, -1, -1):
    if stick[i] > baro:
        cnt += 1
        baro = stick[i]

print(cnt + 1)