def permutation(arr, n):
  result = []
  if n == 0: 
    print('----- s')
    print(result)
    print('----- e')
    return [[]]

  for (i, num) in enumerate(arr):
    for j in permutation(arr[:i] + arr[i + 1:], n - 1):
      result.append([num] + j)
      print(result)
  return result

print(permutation([1,2,3,4,5], 3))




