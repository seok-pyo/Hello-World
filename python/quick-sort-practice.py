sample = [2,6,5,7,9,6,5,4,6,2]

def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[0]

    left = [i for i in arr[1:] if i <= pivot]
    right = [j for j in arr[1:] if j > pivot]

    return quick_sort(left) + [pivot] + quick_sort(right)

# 퀵정렬 반복문으로 구현
def quick_sort_iterative(arr):
    stack = [(0, len(arr) - 1)]

    while stack:
        start, end = stack.pop()

        if start >= end:
            continue

        pivot_index = partition(arr, start, end)

        # 왼쪽, 오른쪽 범위를 스택에 넣기
        stack.append((start, pivot_index - 1))
        stack.append((pivot_index + 1, end))

    return arr

def partition(arr, start, end):
    pivot = arr[start]
    low = start + 1
    high = end

    while low <= high:
        while low <= high and arr[low] <= pivot:
            low += 1
        while low <= high and arr[high] >= pivot:
            high -= 1

        if low < high:
            arr[low], arr[high] = arr[high], arr[low]

    arr[start], arr[high] = arr[high], arr[start]
    return high

quick_sort_iterative(sample)