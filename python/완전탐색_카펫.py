# def solution(brown, yellow):
#   answer = []
#   target = brown + yellow
#   for i in range(3, target // 3):
#     for j in range(i, target // 3):
#       if i * j != target: continue
#       if (i - 2) * (j - 2) == yellow and i * j == target:
#         answer[0] = j
#         answer[1] = i
#         return answer
  
def solution(brown, yellow):
  target = brown + yellow
  for i in range(3, target // 3 + 1):
    if target % i != 0: continue

    j = target // i
    if (i-2) * (j-2) == yellow:
      return [max(i, j), min(i, j)]