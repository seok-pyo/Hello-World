hotel = {}

def solution(k, room_number):
  answer = []
  for room in room_number:
    recur(room)
  
  return hotel

def recur(n):
  if hotel[n] == None:
    hotel[n] = n
    return
  recur(n+1)

print(solution(10, [1,3,4,1,3,1]))
    