vowels = ['A', 'E', 'I', 'O', 'U']
words = []

def solution2(word):
  if len(word) > 5:
    return
  
  words.append(word)

  for v in vowels:
    solution2(word + v)

def solution(word):
  solution2("")
  return words.index(word)



  
