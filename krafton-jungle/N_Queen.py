t = int(input())
cnt = 0

flag_a = [False] * t
flag_b = [False] * (2*t - 1)
flag_c = [False] * (2*t - 1)

def set2(n):
    global cnt

    if n == t:
        cnt += 1
        return

    for i in range(t):
        if not flag_a[i] and not flag_b[n + i] and not flag_c[n - i + (t - 1)]:
            flag_a[i] = True
            flag_b[n + i] = True
            flag_c[n - i + (t - 1)] = True
            set2(n + 1)
            flag_a[i] = False
            flag_b[n + i] = False
            flag_c[n - i + (t - 1)] = False

set2(0)

# print(cnt)


# # # # # merge sort
# def merge_sort(a):
#     def _merge_sort(a, left, right):
#         if left < right:
#             center = (left + right) // 2

#         _merge_sort(a, left, center)
#         _merge_sort(a, center + 1, right)

#         p = j = 0 #
#         i = k = left #

#         while i <= center:
#             buff[p] = a[i]
#             p += 1
#             i += 1

#         while i <= right and j < p: #
#             if buff[j] <= a[i]:
#                 a[k] = buff[j]
#                 j += 1
#             else:
#                 a[k] = a[i]
#                 i += 1
#             k += 1

#         while j < p:
#             a[k] = buff[j]
#             k += 1
#             j += 1

#         n = len(a)
#         buff = [None] * n
#         _merge_sort(a, 0, n - 1)

#         del buff
