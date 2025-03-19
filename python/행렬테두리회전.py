rows = columns = 6
queries = [[2,2,5,4],[3,3,6,6],[5,1,6,3]]

def rotate(x1, y1, x2, y2, matrix):
  first = matrix[x1][y1]
  min_value = first
  # 값의 할당. 기본형은 불변

  for k in range(x1, x2):
    matrix[k][y1] = matrix[k+1][y1]
    min_value = min(min_value, matrix[k+1][y1])

  for k in range(y1, y2):
    matrix[x2][k] = matrix[x2][k+1]
    min_value = min(min_value, matrix[x2][k+1])

  for k in range(x2, x1, -1):
    matrix[k][y2] = matrix[k-1][y2]
    min_value = min(min_value, matrix[k-1][y2])

  for k in range(y2, y1, -1):
    matrix[x1][k] = matrix[x1][k-1]
    min_value = min(min_value, matrix[x1][k-1])

  matrix[x1][y1+1] = first
  # 시계 방향으로 바꿔줘야 한다. 배열을 여러번 회전 시키기 때문에 위에서 first에 값을 넣어둔 이유가 있다.

  return min_value

def solution(rows, columns, queries):
  answer = []
  matrix = [[(i * columns + j + 1) for j in range(columns)]for i in range(rows)]
  for x1, y1, x2, y2 in queries:
    answer.append(rotate(x1-1, y1-1, x2-1, y2-1, matrix))
  
  return answer

print(solution(6, 6, queries))

a = [1,2,3]
b = [3,4,5]
print(min(a + b))
