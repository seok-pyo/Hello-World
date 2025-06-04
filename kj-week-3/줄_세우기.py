from collections import deque

numbers, matching = map(int, input().split())
indegree = [0] * (numbers + 1)
graph = [[] for _ in range(numbers + 1)]

for _ in range(matching):
    s1, s2 = map(int, input().split())
    indegree[s2] += 1
    graph[s1].append(s2)
    # graph[s2].append(s1) 양방향으로 만들 필요가 없음.

queue =  deque()

result = []
def topo():
    global result
    q = deque()

    for i in range(1, numbers + 1):
        if indegree[i] == 0:
            q.append(i)

    while q:
        now = q.popleft()
        result.append(now)
        for i in graph[now]:
            indegree[i] -= 1
            if indegree[i] == 0:
                q.append(i)

topo()
print(*result)


