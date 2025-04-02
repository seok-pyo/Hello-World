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

# start부터 반복문을 실행하면서, 조합을 구성한다.
# r 만큼 깊이를 들어가면 다시 리턴하도록 하고, r만큼 pop을 실행한다.
# 다시 처음 반복문 호출 라인으로 돌아왔을때 빈배열에서 시작할 수 있도록 한다.

print(solution([1,2,3,4,5], 3))


