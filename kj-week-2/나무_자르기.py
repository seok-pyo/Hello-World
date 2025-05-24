n, m = map(int, input().split())
tree = list(map(int, input().split()))

def set_h(arr):
    amount = 0
    result = float('inf')
    arr.sort()

    l = arr[0]
    r = arr[-1]
    # l = 0
    # r = max(arr)

    while l <= r:
        t = (l + r) // 2

        # # if t == 1: return 0
        # if t == 1:
        #     return min(amount, result)
        #     # return 0

        for tree in arr:
            if tree - t > 0:
                amount += (tree - t)


        # result = min(amount, result)

        # if amount < m:
        #     r = t - 1
        # if amount > m:
        #     l = t + 1
        # if amount == m:
        #     return t

        if amount < m:
            r = t - 1
        else:
            result = t
            l = t + 1

        amount = 0

    return result

print(set_h(tree))



