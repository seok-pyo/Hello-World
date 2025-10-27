# 입력을 받아서 순열 사이클을 찾는 문제. 순열 사이클이란, 순열에 인덱싱을 해서 간선을 표현한 인접리스트 형식에서 시작점과 끝점이 같은 경우를 말한다.abs
# 모든 원소를 반복문을 돌면서 BSF로 사이클이 있는지 확인하는 것
# ```python
# from collections import deque

# t = int(input())

# for _ in range(t):
#     cnt = 0
#     graph_length = int(input())
#     graph = list(map(int, input().split()))
#     visi = [False] * (graph_length + 1)
#     # q = deque()
#     # q.append(1)

#     for i in range(1, graph_length + 1):
#         if visi[i]:
#             continue

#         # q.append(i)
#         q = deque([i])
#         visi[i] = True

#         while q:
#             idx = q.popleft()
#             # q.append(graph[idx-1])

#             # if i == idx:
#             #     cnt += 1
#             # visi[idx] = True

#             if not visi[graph[idx-1]]:
#                 visi[graph[idx-1]] = True
#                 q.append(graph[idx-1])
#         cnt += 1

#     print(cnt)
# ```
# BFS 풀이를 할 수도 있지만, 더 좋은 풀이는 DFS 혹은 BFS 없이 탐색을 했는지만 확인해서 풀이를 하는게 좋다.
# 그리고 하나의 경로를 파악하는 문제이기 때문에, DFS가 더 효율적인 풀이가 된다.

import sys
input = sys.stdin.readline

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    arr = [0] + list(map(int, input().split()))
    visited = [False] * (n + 1)
    cycles = 0

    for i in range(1, n+1):
        if visited[i]:
            continue

        cur = i
        while not visited[cur]:
            visited[cur] = True
            cur = arr[cur]
        cycles += 1

    print(cycles)














