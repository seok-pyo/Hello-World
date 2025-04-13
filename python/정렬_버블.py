sample = [2,3,8,4,2,6,8,9,0]

def bubbleSort(data):
  for i in range(len(data) - 1):
    for j in range(i):
      if data[j] > data[j + 1]:
        data[j], data[j + 1] = data[j+1], data[j]

bubbleSort(sample)
print(sample)