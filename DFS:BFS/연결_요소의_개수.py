# n, m = map(int, input().split())

# graph = [[] for _ in range(n + 1)]

# for _ in range(m):
#     s, e = map(int, input().split())
#     graph[s].append(e)
#     graph[e].append(s)

# visited = [False] * (n + 1)

# def dfs(node):
#     visited[node] = True

#     for i in graph[node]:
#         if not visited[i]:
#             dfs(i)

# def count():
#     cnt = 0

#     for i in range(1, n + 1):
#         if not visited[i]:
#             dfs(i)
#             cnt += 1

#     return cnt

# print(count())

# # 왜 못 풀었는가?
# # 해결 방법은?

# https://www.acmicpc.net/problem/11724

n, m = map(int, input().split())

graph = [[] for _ in range(n + 1)]
visited = [False] * (n + 1)

for _ in range(m):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)

def dfs(graph, visited, node):
    visited[node] = True
    for n in graph[node]:
        if not visited[n]:
            dfs(graph, visited, n)

cnt = 0
for i in range(1, n + 1):
    if not visited[i]:
        dfs(graph, visited, i)
        cnt += 1

print(cnt)

# dfs 조건을 잘못보고 실행하는 경우
# 함수의 매개변수로 전달해야 하는 이유가 있을까
# 인접리스트를 구체적으로 그릴 수 있을 때까지

# 인접리스트와 인접행렬은 서로 호환이 가능함.
