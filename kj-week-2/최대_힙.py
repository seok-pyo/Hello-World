import heapq

hq = []

n = int(input())

for _ in range(n):
    in_num = int(input())

    if in_num == 0:
        if len(hq) == 0:
            print(0)
        else:
            max_num = heapq.heappop(hq) * -1
            print(max_num)
    else:
        heapq.heappush(hq, in_num * -1)


