def solution(k, room_number):
  hotel = {}
  answer = []
  def recur(n):
    if n not in hotel:
      hotel[n] = n + 1
      return n
    
    empty_room = recur(hotel[n])
    hotel[n] = empty_room + 1 # 경로 압축
    return empty_room
  for room in room_number:
    assigned_room = recur(room)
    answer.append(assigned_room)
  
  return answer


print(solution(10, [1,3,4,1,3,1]))
    
