def solution():
  n = int(input())
  store = list(map(int, input().split()))
  m = int(input())
  order = list(map(int, input().split()))

  result = []

  for o in order:
    if o in store:
      result.append('yes')
    else:
      result.append('no')

  print(' '.join(result))

# solution()

# set 자료형을 이용한 문제풀이방법

n = int(input())
array = set(map(int, input().split()))

m = int(input())
x = list(map(int, input().split()))

for i in x:
  if i in array:
    print('yes', end=' ')
  else:
    print('no', end=' ')

# 이진탐색을 이용한 풀이
def binary_search(arr, target, start, end):
  while start <= end: # start와 end가 같아지는 경우 == mid가 target이 되는 경우 범위가 하나인 경우에도 탐색할 수 있도록
    mid = (start + end) // 2
    if arr[mid] == target:
      return mid
    elif arr[mid] < target:
      start = mid + 1
    else:
      end = mid - 1

  return None















