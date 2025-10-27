# DFS와 BFS 1260

# 정점의 개수 : N
# 간선의 개수 : M
# 시작 정점 : V

# 그래프의 표현 방법
n, m, v = map(int, input().split())
# graph = [[]] * (n + 1) ---> 잘못된 코드! 하나의 빈 리스트 객체를 (n + 1)번 참조 복사하는 코드이다.
graph = [[] for _ in range(n + 1)]

for i in range(m):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)

print(graph)