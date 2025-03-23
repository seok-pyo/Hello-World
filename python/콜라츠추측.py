def solution(num):
  # 입력된 수가 짝수라면 2로 나눈다.
  # 입력된 수가 홀수라면 3을 곱하고 1을 더한다.
  # 결과에 같은 작업을 1이 나올 때까지 반복한다.

  # 몇 번 반복해야 1이 나오는지, 500번 이상했을 때 나오지 않는다면 -1을 반환하자.
  cnt = 0

  while num != 1:

    if cnt > 500:
      return -1
    if num % 2 == 0:
      num = num / 2   
      cnt += 1
    else:
      num = num * 3 + 1
      cnt += 1

  return cnt
  
  
print(solution(16))
  
    
  
