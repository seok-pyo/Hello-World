n = int(input())
n_arr = list(map(int, input().split()))
m = int(input())
m_arr = list(map(int, input().split()))

n_arr.sort()

def find_(x, arr):
    l = 0
    r = len(arr) - 1

    while l <= r:
        m = (l + r) // 2
        if arr[m] == x:
            print(1)
            return
        if arr[m] < x:
            l = m + 1
        if arr[m] > x:
            r = m - 1

    print(0)

for ele in m_arr:
    find_(ele, n_arr)

# def find_(arr, x):
#     if len(arr) == 1:
#         return

#     mid = len(arr) // 2
#     find_()
