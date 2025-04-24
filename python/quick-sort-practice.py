def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[0]

    left = [i for i in arr[1:] if i <= pivot]
    right = [j for j in arr[1:] if j > pivot]

    return quick_sort(left) + [pivot] + quick_sort(right)

sample = [2,6,5,7,9,6,5,4,6,2]


