# 순열 반복문
# def permu_iter(arr, r):
  
# 순열 재귀
# def permu_recu(arr, r):
#   result = []
#   if r == 0:
#     return [[]]
  
#   for (i, num) in enumerate(arr):
#     for j in permu_recu(arr[:i] + arr[i + 1:], r - 1):
#       result.append([num] + j)
#   return result

# 조합 반복문
def combi_iter(arr, r):
  indices = list(range(r))

  while True:
    result.append()

    for i in 
  


# 조합 재귀
# def combi_recu(arr, r):
#   cnt = 0
#   result = []
  
#   def dfs(start, path):
#     nonlocal cnt
#     if len(path) == r:
#       cnt += 1
#       result.append(path[:])
#       return 
#     for i in range(start, len(arr)):
#       path.append(arr[i])
#       dfs(i + 1, path) # 중복 조합은 dfs(i, path)
#       path.pop()
  
#   dfs(0, [])
#   return cnt


# print(permu_recu([1,2,3,4,5], 3))
# print(combi_recu([1,2,3,4,5], 3))