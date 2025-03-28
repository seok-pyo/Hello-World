def solution(arr):
  c = [0] * len(arr)
  result = [arr[:]]
  i = 0

  while i < len(arr):
    if c[i] < i:
      if i % 2 == 0:
        arr[0], arr[i] = arr[i], arr[0]
      else:
        arr[c[i]], arr[i] = arr[i], arr[c[i]]
      result.append(arr[:])
      # i를 초기화하는 순서 중요
      c[i] += 1
      i = 0
    else:
      c[i] = 0
      i += 1
  
  return result

print(solution([1,2,3]))

# c배열은 현재 i번째 요소가 이전에 얼마나 교환되었는가를 기반으로 다음 스왑의 대상을 결정하는 역할
# c배열의 원소는 스왑된 횟수이면서, 현재 요소와 다음에 스왑될 요소의 인덱스