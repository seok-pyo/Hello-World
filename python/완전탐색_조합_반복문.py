def combi(arr, r):
  result = []
  indices = list(range(r))

  while True:
    result.append([arr[i] for i in indices])
    
    for i in reversed(range(r)):
      # i는 r의 범위를 나타내고, n - r은 r을 제외한 나머지, 따라서 i + len(arr) - r 은 n이 된다.
      if indices[i] != i + len(arr) - r:
        break
    # break없이 반복문이 모두 실행되면 else문이 실행
    else:
      return result
    
    indices[i] += 1
    # i는 반드시 r보다 작은 수에서만 아래 반복문이 실행된다.
    for j in range(i+1, r):
      indices[j] = indices[j-1] + 1

# print(combi([1,2,3,4,5], 3))


