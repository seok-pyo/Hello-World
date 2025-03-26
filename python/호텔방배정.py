hotel = {}

def solution(k, room_number):
  answer = []
  for room in room_number:
    recur(room)

  for i in hotel:
    answer.append(hotel[i])
  
  return answer

def recur(n):
  if n not in hotel:
    hotel[n] = n 
    return n
  recur(n+1)

print(solution(10, [1,3,4,1,3,1]))
    