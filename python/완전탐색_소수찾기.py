# def solution(numbers):
#   cnt= 0
#   visited = set() # set으로 중복 검사

#   def permu(arr, r):
#     nonlocal cnt
#     result = []
#     if r == 0:
#       return [''] # 빈문자가 들어가 있는 배열로 초기화
    
#     for i in range(len(arr)):
#       # if isPrime(int(i)): cnt+=1 << 이 부분은 필요가 없음
#       for j in permu(arr[:i]+arr[i+1:], r-1):
#         num_str = arr[i] + j
#         num = int(num_str) 
#         if num not in visited:
#           visited.add(num)
#           if isPrime(num):
#             cnt += 1
#         result.append(num_str)
#     return result # r!=0인 경우 result를 반환해야 재귀함수가 정상적으로 동작

#   permu(numbers, len(numbers))
#   return cnt  
  

# def isPrime(number):
#   # if number == 1: return False 
#   if number < 2: return False # 0과 1모두 처리
#   i = 2
#   while i != number:
#     if number % i == 0:
#       return False
#     i += 1
    
#   return True

from itertools import permutations

def solution(numbers):
  cnt = 0
  checked = set()

  def isPrime(number):
    if number < 2:
      return False
    for i in range(2, int(number ** 0.5) + 1):
      if number % i == 0:
        return False
    return True
  
  for i in range(len(numbers) + 1):
    for p in permutations(numbers, i):
      num = int(''.join(p))
      if num not in checked:
        checked.add(num)
        if isPrime(num):
          cnt += 1

  return cnt
      
