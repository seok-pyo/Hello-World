def binary_search(arr, target, start, end):
    result = 0
    while start <= end:
        remain = 0
        mid = (start + end) // 2

        for height in arr:
            if height > mid:
              remain += height - mid

        if remain >= target:
            result = mid # 최대로 잘리는 값을 구하기 때문에 바로 리턴하지 않고 결과값에 담아서 반복문을 계속 실행한다.
            start = mid + 1
        else:
            end = mid - 1

    return result

def solution():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    target = max(arr)

    print(binary_search(arr, m, 0, target - 1))

solution()
