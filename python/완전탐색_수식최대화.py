from itertools import permutations

def solution(expression):
  for i in permutations(['*', '-', '+'], 3):
    for (j, num) in enumerate(expression):



