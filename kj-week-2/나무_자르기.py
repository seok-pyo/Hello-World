# n, m = map(int, input().split())
# tree = list(map(int, input().split()))

# def set_h(arr):
#     amount = 0
#     result = float('inf')
#     arr.sort()

#     l = arr[0]
#     r = arr[-1]
#     # l = 0
#     # r = max(arr)

#     while l <= r:
#         t = (l + r) // 2

#         # # if t == 1: return 0
#         # if t == 1:
#         #     return min(amount, result)
#         #     # return 0

#         for tree in arr:
#             if tree - t > 0:
#                 amount += (tree - t)


#         # result = min(amount, result)

#         # if amount < m:
#         #     r = t - 1
#         # if amount > m:
#         #     l = t + 1
#         # if amount == m:
#         #     return t

#         if amount < m:
#             r = t - 1
#         else:
#             result = t
#             l = t + 1

#         amount = 0

#     return result

# print(set_h(tree))

n, m = map(int, input().split())

trees = list(map(int, input().split()))

ground = 0
height = max(trees)
# result = 0

def cut(ground, height):
    global result

    result = 0
    # if mid == 1: # 조건을 잡는 방법
    #     return

    if ground > height:
        return height

    mid = (ground + height) // 2
    for tree in trees:
        if tree > mid: # 음수가 될 수도 있는 상황을 확인
            result += (tree - mid)

    if result < m:
        height = mid - 1
    elif result > m:
        ground = mid + 1
    else:
        return mid

    return(cut(ground, height))

print(cut(ground, height))


