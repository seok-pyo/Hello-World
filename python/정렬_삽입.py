sample = [3, 0, 1, 8, 7, 2, 5, 4, 6, 9]

def insertSort(arr):
  for i in range(1, len(arr)):
    key = arr[i]
    j = i - 1

    while j >= 0 and arr[j] > key:
      arr[j + 1] = arr[j]
      j -= 1

    arr[j + 1] = key
    print(f"Step {i}: {arr}")

  return arr

insertSort(sample)
