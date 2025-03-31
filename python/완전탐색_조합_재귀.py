def combi(arr, r):
  result = []
  n = len(arr)

  indices = list(range(r))

  while True:
    result.append([arr[i] for i in indices])
  
    increasing_index = None

    for i in reversed(range(r)):
      # i + n - r 은 인덱스의 최대값
      if indices[i] != i + n - r:
        increasing_index = i
        break
    else:
      return result
  
    indices[increasing_index] += 1
    for j in range(increasing_index + 1, r):
      indices[j] = indices[j - 1] + 1

print(combi([1,2,3,4,5], 3))