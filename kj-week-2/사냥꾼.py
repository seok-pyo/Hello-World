m, n ,length = map(int, input().split())
spot = list(map(int, input().split()))
animals = [list(map(int, input().split())) for _ in range(n)]

spot.sort()
cnt = 0

for x, y in animals:
    start = 0
    end = m - 1

    while start <= end:
        mid = ((start + end) // 2)

        if distance <= length:
            cnt += 1
            break
        elif spot[mid] < x:
            start = mid + 1
        else:
            end = mid - 1
    distance = abs(spot[mid] - x) + y

print(cnt)