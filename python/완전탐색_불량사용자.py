def solution(user_id, banned_id):
  for i in user_id:
    for j in banned_id:
      if len(user_id[i]) != len(banned_id[j]): continue
      
