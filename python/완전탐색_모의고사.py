def solution(answers):
  answer = [0,0,0]

  a = [1,2,3,4,5]
  b = [1,3,4,5]
  c = [3,1,2,4,5]

  cnt = 0

  for (i, num) in enumerate(answers):
    if num == a[i % 5]:
      answer[0]+=1

    if i % 2 == 0 and num == 2:
      answer[1]+=1
    if i % 2 != 0:
      if cnt == 3: cnt = 0
      if num == b[cnt]:
        answer[1]+=1 
        cnt+=1

    if num == c[i // 2]:
      answer[2]+=1

  max_num = max(answer)

  result = []
  for i in range(3):
    if max_num == answer[i]:
      result.append(i+1)
  return result

print(solution([1,3,2,4,2]))