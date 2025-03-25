def solution(n, start=1, to=3, aux=2, answer=[]):
  if n == 1:
    answer.append([start, to])
    return answer
    
  solution(n-1, start, aux, to, answer)
  answer.append([start, to])
  solution(n-1, aux, to, start, answer)
  return answer

print(solution(3))
