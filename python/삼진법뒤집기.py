from collections import deque

def solution(n):
  sum=0
  answer=deque([])
  result=n
  remain=0
  
  if(n==1):
    return 1  

  while(3<=result):
    remain=result%3
    result=result//3
    answer.appendleft(remain)

  answer.appendleft(result)

  for i in range(len(answer)):
    sum+=answer[i]*(3**i)
  
  return sum
  
    
print(solution(125))

