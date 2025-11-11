# DFS

def solution(n, computers):
  answer = 0
  visited = [False] * n

  def dfs(x):
    visited[x] = True
    for nxt in range(n):
      if computers[x][nxt] == 1 and not visited[nxt]:
        dfs(nxt)

  for i in range(n):
    if not visited[i]:
      dfs(i)
      answer += 1

  return answer

# BFS

from collections import deque

def solutions(n, computers):
    visited = [False] * n
    answer = 0

    for i in range(n):
        queue = deque([i])
        visited[i] = True

        while queue:
            cur = queue.popleft()
            for nxt in range(n):
                if computers[cur][nxt] == 1 and not visited[nxt]:
                    visited[nxt] = True
                    queue.append(nxt)

        answer += 1

    return answer
