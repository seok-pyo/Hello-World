# DFS

def solution(n, computers):
  answer = 0
  visited = [False] * n

  def dfs(x):
    visited[x] = True # 반복문은 방문한 곳을 체크하는 용도
    for nxt in range(n):
      if computers[x][nxt] == 1 and not visited[nxt]:
        dfs(nxt) # 재귀 호출!

  for i in range(n):
    if not visited[i]:
      dfs(i) # 재귀로 계속 호출이 되기 때문에, 재귀함수가 끝나면 해당 출발점에서 갈수 있는 모든 곳(연결된)을 확인한 결과를 얻게 된다.
      answer += 1

  return answer

# BFS

from collections import deque

def solutions(n, computers):
    visited = [False] * n
    answer = 0

    for i in range(n): # 행(출발점)을 반복문으로 순회
        queue = deque([i])
        visited[i] = True # 출발지를 방문한 컴퓨터로 체크

        while queue:
            cur = queue.popleft()
            for nxt in range(n): # 열(도착점)을 돌면서 반복문으로 순회
                if computers[cur][nxt] == 1 and not visited[nxt]:
                    visited[nxt] = True # 도착지를 방문한 컴퓨터로 체크
                    queue.append(nxt)

        answer += 1

    return answer
