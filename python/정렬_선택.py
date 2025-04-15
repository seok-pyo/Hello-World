sample = [3,0,1,8,7,2,5,4,6,9]

def solution(data):
  for i in range(len(data)):
    for j in range(i + 1, len(data)):
      if data[i] > data[j]: 
        data[i], data[j] = data[j], data[i]

      
solution(sample)
print(sample)