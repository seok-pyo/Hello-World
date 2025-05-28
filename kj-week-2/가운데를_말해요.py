import heapq
import sys

input = sys.stdin.readline

n = int(input())

left = []
right = []

for _ in range(n):
    num = int(input())

    heapq.heappush(left, -num)

    heapq.heappush(right, -heapq.heappop(left))

    if len(right) > len(left):
        heapq.heappush(left, -heapq.heappop(right))

    print(-left[0])
