def solution(arr, r):
  result = []

  def dfs(start, path):
    if len(path) == r:
      result.append(path[:])
      return
    for i in range(start, len(arr)):
      path.append(arr[i])
      dfs(i + 1, path)
      path.pop()

  dfs(0, [])
  return result


