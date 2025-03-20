def solution(n):
  answer = []
  x, y = -1, 0
  num = 1
  snail = [[0] * (i + 1) for i in range(n)]
  
  direction = [(1,0), (0,1), (-1, -1)]

  for i in range(n):
    for _ in range(n - i):
      dx, dy = direction[i % 3]
      x += dx
      y += dy
      snail[x][y] = num
      num += 1

  # for row in snail:
  #   answer.extend(row)
    
  # return answer
  # return [i for j in snail for i in j]
  return [j for i in snail for j in i]

print(solution(4))
