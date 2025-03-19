# def solution(s):
#   answer=len(s)
#   last=int(len(s)/2) 

#   comStr=''
#   cnt=1
#   step=1

#   for i in range(last):
#     slice=s[0:i+1]

#     step=len(slice)
    
#     for j in range(i+1, len(s), step):

#       # if(i+j+1<=len(s)):
#       #   slice2=s[j:j+i+1]

#       slice2=s[j:j+step]

#       if(slice==slice2):
#         cnt+=1
#       else:
#         if(cnt==1):
#           comStr+=slice2
#         else:
#           comStr+=str(cnt)+slice2
#           cnt=1
    
#     if(answer > len(comStr)):
#       answer = len(comStr)
#     else:
#       comStr=''

#   answer=min(answer,len(comStr))  
#   print('this is answer ->', comStr)
  

  


#   return answer    

# print(solution("aabbaccc"))
# print(solution("xababcdcdababcdcd"))
# print(solution("abcabcabcabcdededededede"))

# def solution(s):
#   answer=len(s)
#   last=int(len(s)/2) 
#   result = ''

#   comStr=''
#   cnt=1
#   step=1

#   for i in range(1, last):
#     slice=s[0:i]

#     # step=len(slice)
    
#     for j in range(i+1, len(s), i):

#       # if(i+j+1<=len(s)):
#       #   slice2=s[j:j+i+1]

#       slice2=s[j:j+i]

#       if(slice==slice2):
#         cnt+=1
#       else:
#         if(cnt==1):
#           comStr+=slice
#         else:
#           comStr+=str(cnt)+slice2
#           cnt=1
    
#     if(answer > len(comStr)):
#       answer = len(comStr)
#       result = comStr
#     else:
#       comStr=s

#   answer=min(answer,len(comStr))  
#   print('this is answer ->', result)
  
#   return answer    

# print(solution("aabbaccc"))
# print(solution("xababcdcdababcdcd"))
# print(solution("abcabcabcabcdededededede"))

def solution(s):
  answer = len(s)
  length = len(s)

  if (length == 1):
    return 1
  
  # i는 인덱스가 아니고 step 단계이기 때문에, 밑에 j에서 바로 i를 사용할 수 있다.
  # 이 내용이 기가 막히다. offset, 거리 만큼 떨어져 있다는 것. wow
  
  for i in range(1, length // 2 + 1):
    compressed = ''
    prev = s[:i]
    cnt = 1
    
    for j in range(i, length, i):
      current = s[j:j+i]
      
      if (prev == current):
        cnt += 1
      else:
        compressed += str(cnt) + prev if cnt > 1 else prev
        prev = current
        cnt = 1

    compressed += str(cnt) + prev if cnt > 1 else prev

    answer = min(len(compressed), answer)
  
  return answer


print(solution("aabbaccc"))
print(solution("xababcdcdababcdcd"))
print(solution("abcabcabcabcdededededede"))
print(solution("ababcdcdababcdcd"))

        



    
