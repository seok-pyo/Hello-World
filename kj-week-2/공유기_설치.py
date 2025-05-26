import sys
sys.stdin.readline

n, c = map(int, input().split())
house = []

flag = False

for _ in range(n):
    house.append(int(input()))

house.sort()

first = 0
end = n - 1

dis = float('inf')

if n == 2:
    dis = house[end] - house[first]
    flag = True

while first <= end and not flag:
    mid = (first + end) // 2

    if mid == first or mid == end:
        break

    front = house[mid] - house[first]
    back = house[end] - house[mid]

    if front > back:
        end = mid - 1
    else:
        first = mid + 1

    dis = min(dis, front, back)

print(dis)


