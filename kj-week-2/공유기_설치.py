# # import sys
# # sys.stdin.readline

# # n, c = map(int, input().split())
# # house = []

# # for _ in range(n):
# #     house.append(int(input()))

# # house.sort()

# # first = house[0]
# # end = house[n - 1]

# # dis = float('inf')

# # if n == 2:
# #     dis = house[end] - house[first]
# #     flag = True

# # while first <= end:
# #     mid = (first + end) // 2

#     # if mid == first or mid == end:
#     #     break

#     # front = house[mid] - house[first]
#     # back = house[end] - house[mid]

# #     for i in range(mid):


# #     if front > back:
# #         end = mid - 1
# #     else:
# #         first = mid + 1

# #     dis = min(dis, front, back)

# # print(dis)

import sys
sys.stdin.readline

n, c = map(int, input().split())
house = []

for _ in range(n):
    house.append(int(input()))

house.sort()

first = 1
end = house[-1] - house[0]
answer = 0

while first <= end:
    cnt = 1
    last_installed = house[0]
    mid = (first + end) // 2

    for h in house:
        if (h - last_installed) >= mid:
            cnt += 1
            last_installed = h

    if cnt >= c:
        answer = mid
        first = mid + 1
    else:
        end = mid - 1

print(answer)