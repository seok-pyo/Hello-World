import heapq

n = int(input())

hq = []

result = 0

for _ in range(n):
    number = int(input())
    heapq.heappush(hq, number)

while len(hq) >= 2:
    first = heapq.heappop(hq)
    second = heapq.heappop(hq)

    sum_val = first + second
    result += sum_val
    heapq.heappush(hq, sum_val)

print(result)

# 최적해의 보장