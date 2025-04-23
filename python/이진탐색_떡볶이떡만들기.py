# def binary_search(arr, target, start, end):
#     result = 0
#     while start <= end:
#         remain = 0
#         mid = (start + end) // 2

#         for height in arr:
#             if height > mid:
#               remain += height - mid

#         if remain >= target:
#             result = mid # 최대로 잘리는 값을 구하기 때문에 바로 리턴하지 않고 결과값에 담아서 반복문을 계속 실행한다.
#             start = mid + 1
#         else:
#             end = mid - 1

#     return result

# def solution():
#     n, m = map(int, input().split())
#     arr = list(map(int, input().split()))

#     target = max(arr)

#     print(binary_search(arr, m, 0, target - 1))

# solution()

def bs(arr, target, start, end, result):
  if start >= end:
    return result

  remain = 0
  mid = (start + end) // 2
  for height in arr:
    if height > mid:
      remain += height - mid

  if target <= remain:
    return bs(arr, target, mid + 1, end, mid) # 이 경우에는 최적해가 될 가능성이 있으므로 result에 mid를 넣어주어야 한다.
  else:
    return bs(arr, target, start, mid - 1, result) # 이 경우에는 최적해가 아니므로 이전에 갖고 있던 result를 가져가야 한다.

def solution():
  n, m = map(int, input().split())
  arr = list(map(int, input().split()))

  print(bs(arr, m, 0, max(arr), 0))

solution()



