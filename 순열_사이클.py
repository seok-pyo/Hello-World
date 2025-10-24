# 입력을 받아서 순열 사이클을 찾는 문제. 순열 사이클이란, 순열에 인덱싱을 해서 간선을 표현한 인접리스트 형식에서 시작점과 끝점이 같은 경우를 말한다.abs
# 모든 원소를 반복문을 돌면서 BSF로 사이클이 있는지 확인하는 것

from collections import deque

t = int(input())

for _ in range(t):
    cnt = 0
    graph_length = int(input())
    graph = list(map(int, input().split()))
    visi = [False] * (graph_length + 1)
    # q = deque()
    # q.append(1)

    for i in range(1, graph_length + 1):
        if visi[i]:
            continue

        # q.append(i)
        q = deque([i])
        visi[i] = True

        while q:
            idx = q.popleft()
            # q.append(graph[idx-1])

            # if i == idx:
            #     cnt += 1
            # visi[idx] = True

            if not visi[graph[idx-1]]:
                visi[graph[idx-1]] = True
                q.append(graph[idx-1])
        cnt += 1

    print(cnt)












