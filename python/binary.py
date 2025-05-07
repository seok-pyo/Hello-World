a = [2,5,7,3,9,7,2,1]

def bs(target, arr):
    arr.sort()
    start = 0
    end = len(arr) - 1
    mid = (start + end) // 2

    while start <= end:
        if arr[mid] == target:
            return mid
        if arr[mid] > target:
            end = mid - 1
        else:
            start = mid + 1

    return -1

print(bs(3, a))
