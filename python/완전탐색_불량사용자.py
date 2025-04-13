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
  
# re.match(pattern, user)
# permutaions(list, numbers)
# frozenset(set)

def search(idx, visit, userId, answer, banPatterns):
  if idx == len(banPatterns):
    answer.add(visit)
    return
  
  for i in range(len(userId)):
    if (visit & (1<<i)) > 0 or not re.fullmatch(banPatterns[idx], userId[i]):
      continue
    search(idx + 1, visit | (1<<i), userId, answer, banPatterns)

def solution(userId, bannedId):
  answer = set()
  banPatterns = [x.replace('*', '.') for x in bannedId]
  search(0, 0, userId, answer, banPatterns)
  return len(answer)