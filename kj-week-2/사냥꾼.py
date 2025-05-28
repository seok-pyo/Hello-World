m, n ,length = map(int, input().split())

spot = list(map(int, input().split()))

animals = [list(map(int, input().split())) for _ in range(n)]

animals.sort()
spot.sort()

cnt = 0

start = 0
end = n

# while start <= end:
#     mid = (start + end) // 2

#     x, y = animals[mid - 1]
#     for s in spot:
#         if abs(s - x) + y <= length:
#             cnt += 1
#             start = mid + 1
#         elif abs(s - x) + y > length:
#             end = mid - 1

for ani in animals:
    x, y = ani





print(cnt)

