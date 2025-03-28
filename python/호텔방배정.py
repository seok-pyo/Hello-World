# def solution(k, room_number):
#   hotel = {}
#   answer = []
#   def recur(n):
#     if n not in hotel:
#       hotel[n] = n + 1
#       return n
    
#     empty_room = recur(hotel[n]) # 경로 압축
#     hotel[n] = empty_room + 1 
#     return empty_room
  
#   for room in room_number:
#     assigned_room = recur(room)
#     answer.append(assigned_room)
  
#   return answer

import sys
sys.setrecursionlimit(2000) 

def solution(k, room_number):
  hotel = {}
  answer = []

  def find(n):
    if n not in hotel:
      hotel[n] = n
    if hotel[n] != n:
      hotel[n] = find(hotel[n])
    return hotel[n]
  
  for room in room_number:
    assigned_room = find(room)
    answer.append(assigned_room)
    hotel[assigned_room] = assigned_room + 1

  return answer

print(solution(10, [1,3,4,1,3,1]))
print(solution(1, [2,1]))
