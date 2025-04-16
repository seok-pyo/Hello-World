sample = [4,6,3,4,5,4,4,0]
def bubble(data):

  result = data[:]
  for i in range(len(result) - 1):
    for j in range(len(result) - i - 1):
      if result[j] > result[j+1]:
        result[j], result[j+1] = result[j+1], result[j]
  return result

print(bubble(sample))

def selection(data):
  result = data[:]
  for i in range(len(result) - 1): # 배열의 길이의 -1 만큼만 순회하는 것이 맞다.
    idx = i
    for j in range(i + 1, len(result)): # result 길이의 끝까지 돌아야 함으로
      if result[idx] > result[j]:
        idx = j
    #result[idx], result[i] = result[idx], result[i] # 나열된 순서가 같으면 swap이 이뤄지지 않는다.
    result[idx], result[i] = result[i], result[idx]
  return result

print(selection(sample))
  
  