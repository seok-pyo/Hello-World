a = [3,7,6,2,4,6,8,9,1]

# def bs(array, target):
#     a.sort() # 수정
#     start = 0
#     end = len(array) - 1
#     mid = (start + end) // 2

#     while start != mid: # 수정
#         for i in range(start, end): # for 불필요
#             if array[i] == target:
#                 return i
#             if array[i] > target:
#                 end = mid #
#             else:
#                 start = mid #

# print(bs(a, 2))

def bs(a, t):
    a.sort()
    start = 0
    end = len(a) - 1

    while start <= end:
        mid = (start + end) // 2
        if a[mid] == t:
          return mid
        if a[mid] > t:
          end = mid - 1
        else:
          start = mid + 1
    return -1

print(bs(a, 4))

