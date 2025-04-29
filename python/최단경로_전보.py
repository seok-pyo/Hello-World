import sys
input = sys.stdin.readline
import heapq
INF = int(1e9)

n, m, c = map(int, input().split())

graph = [[] for i in range(n + 1)]
distance = [INF] * (n + 1)

for _ in range(1, m + 1):
    x, y, z = map(int, input().split())
    graph[x].append((y, z))

def djikstra(start):
    q = []
    heapq.heappush(q, (0, start)) #
    distance[start] = 0 #

    while q:
        dist, now = heapq.heappop(q)

        if distance[now] < dist:
            continue
        for i in graph[now]:
            cost = dist + i[1]
            if distance[i[0]] > cost:
                distance[i[0]] = cost
                heapq.heappush(q, (i[1],i[0]))

djikstra(c)

count = 0
max_distance = 0
for d in distance:
    if d != INF:
        count += 1
        max_distance = max(max_distance, d)

print(count - 1, max_distance)