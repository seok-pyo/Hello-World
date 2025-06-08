city = int(input())

graph = [list(map(int, input().split())) for _ in range(city)]

best = float('inf')

def solution(curr, depth, cost, visited):
    global best

    if depth == city:
        if graph[curr][0] != 0:
            best = min(best, cost + graph[curr][0])
        return

    if cost >= best:
        return

    for nxt in range(1, city):
        if not visited[nxt] and graph[curr][nxt] != 0:
            visited[nxt] = True
            solution(nxt, depth + 1, cost + graph[curr][nxt], visited)
            visited[nxt] = False

visited = [False] * city
visited[0] = True
solution(0, 1, 0, visited)

print(best)
