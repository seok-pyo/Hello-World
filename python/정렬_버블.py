sample = [2,3,8,4,2,6,8,9,0]
sample2 = [3, 0, 1, 8, 8, 7, 2, 5, 4, 6, 9]

# def bubbleSort(data):
#   for i in range(len(data) - 1):
#     for j in range(i):
#       if data[j] > data[j + 1]:
#         data[j], data[j + 1] = data[j+1], data[j]

# bubbleSort(sample2)
# print(sample2)

def bubble(data):
  for i in range(len(data) - 1):
    for j in range(len(data) - 1 - i):
      print('this is data[j]', data[j], 'this is data[j+1]', data[j+1])
      if data[j] > data[j + 1]:
        data[j], data[j + 1] = data[j + 1], data[j]
  
bubble(sample)
print(sample)


