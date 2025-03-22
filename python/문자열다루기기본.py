import re

def solution(s):
  
  if bool(re.search(r"\D", s)):
    return False
  if len(s) == 4 or len(s) == 6:
    return True
  return False
  

