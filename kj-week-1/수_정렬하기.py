def bubble_sort(a):
    n = len(a)
    for i in range(n - 1):
        for j in range(n - 1, i, -1):
            if a[j - 1] > a[j]:
                a[j - 1], a[j] = a[j], a[j - 1]
    return a

print(bubble_sort([3,7,6,1,4,8,9,7,5]))

def shaker_sort(a):
    left = 0
    right = len(a) - 1
    last = right
    while left < right:
        for j in range(right, left, -1):
            if a[j - 1] > a[j]:
                a[j - 1], a[j] = a[j], a[j - 1]
                last = j
        left = last

        for j in range(left, right):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                last = j
        right = left

def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min = i
        for j in range(i + 1, n):
            if arr[j] < arr[min]:
                min = j
            arr[i], arr[min] = arr[min], arr[i]

def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        j = i
        tmp = arr[i]
        while j > 0 and arr[j - 1] > tmp:
            arr[j] = arr[j - 1]
            j -= 1
        arr[j] = tmp
