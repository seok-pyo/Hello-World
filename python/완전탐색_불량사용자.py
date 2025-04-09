import re
from itertools import permutations 

def is_match(user, banned):
  pattern = '^' + banned.replace('*', '.') + '$'
  return re.match(pattern, user)

def solution(user_id, banned_id):
  possible_case = set()

  for perm in permutations(user_id, len(banned_id)):
    match = True
    for u, b in zip(perm, banned_id):
      if not is_match(u, b):
        match = False
        break
    if match:
      possible_case.add(frozenset(perm))

  return len(possible_case)
  
        
