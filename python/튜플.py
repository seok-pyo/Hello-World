def solution(s):
  answer = []
  dic = {}
  num = ''
  for c in s:
    if c == '{': continue
    elif c == ',':
      if dic[num]: dic[num] += 1
      else: dic[num] = 0
      num = ''
    else

  return dic

t = "{{2},{2,1},{2,1,3},{2,1,3,4}}"

print(solution(t))
