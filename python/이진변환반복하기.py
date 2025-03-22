def solution(s):
  answer=[0,0]
  # 이진 변환 횟수
  bitCnt=0
  # 제거된 0의 개수
  eliZero=0
  # 0이 제거된 수
  eliNum=s
  comNum='0'
  
  while int(eliNum)!=1:
    comNum=''
    for num in eliNum:
      if num=='0':
        eliZero+=1
      else:
        comNum+='1'
    eliNum=comNum
    bitCnt+=1
    eliNum=to_binary(int(len(eliNum)))
  
  
  answer[0]=bitCnt
  answer[1]=eliZero
  return answer

# 재귀함수를 활용한  이진법 변환
def to_binary(n):
  if n == 0:
    return "0"
  elif n == 1:
    return "1"
  else:
    return to_binary(n//2) + str(n%2)
    
print(solution("110010101001"))