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
  for i in range(len(result) - 1):
    idx = i
    for j in range(i + 1, len(result) - 1):
      if result[idx] > result[j]:
        idx = j
    result[idx], result[i] = result[idx], result[i]
  return result

print(selection(sample))
  
  