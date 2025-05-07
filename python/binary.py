a = [2,5,7,3,9,7,2,1]

def bs(target, arr):
    arr.sort()
    start = 0
    end = len(arr) - 1
    mid = (start + end) // 2 # mid가 갱신되지 않는다...
    # while 문 안에 있어야 함.
    # 이렇게 놓치는 부분을 어떻게 잡을 수 있지
    # 더 중요한 것...

    while start <= end:
        if arr[mid] == target:
            return mid
        if arr[mid] > target:
            end = mid - 1
        else:
            start = mid + 1

    return -1

print(bs(3, a))
