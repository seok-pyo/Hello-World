import sys
input = sys.stdin.readline

# n = int(input())
# arr = []

# for _ in range(n):
#     arr.append(int(input()))

# def quick(arr):
#     if len(arr) <= 1 :
#         return arr
#     pivot = arr[0]
#     tail = arr[1:]

#     left = [e for e in tail if e < pivot]
#     right = [e for e in tail if e > pivot]

#     return quick(left) + [pivot] + quick(right)

# for i in quick(arr):
#     print(i)

n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

arr.sort()

for i in arr:
    print(i)