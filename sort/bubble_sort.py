# def bubble_sort():
#     arr = [6,4,3,7,1,9,8]
#     length = len(arr) - 1
#     for i in range(length, 1, -1):
#         for j in range(i, 1, -1):
#             if arr[i] > arr[j]:
#                 arr[j], arr[i] = arr[i], arr[j]
#             else:
#                 continue
#     return arr

# print(bubble_sort())

# arr = [6,4,3,7,1,9,8]

# def bubble_sort(a):
#     n = len(a)
#     for i in range(n - 1):
#         for j in range(n - 1, i, -1):
#             if a[j - 1] > a[j]:
#                 a[j - 1], a[j] = a[j], a[j - 1]

# # bubble_sort(arr)
# # print(arr)

# string = "Geeks"

# def test(string):
#     string = "GeeksforGeeks"
#     print("Inside Funtion", string)

# test(string) # 안 바뀜. 재할당만 됨.
# print("Outside Function:", string)

# def add_more(list):
#     list.append(50)
#     print("Inside Function", list)

# my_list = [10, 20, 30, 40]
# add_more(my_list)
# print("Outside Function:", my_list)

# 25.10.28


def bubble_sort(arr):
    for i in range(len(arr)):
        for j in range(1, len(arr) - i):
            if arr[j] <= arr[j - 1]:
                arr[j], arr[j - 1] = arr[j - 1], arr[j]
    return arr

print(bubble_sort([2,6,4,8,9,1,4]))

# 개선 포인트
# 1. 불필요한 비교 최소화 (<= 을 < 로 수정) : 정렬 결과는 같지만, 불필요한 swap 연산이 많음
# 2. 정렬이 일찍 끝났을 때 멈추기 추가(조기 종료) : swapped 플래그를 추가하면 된다. 어디에 추가하면 될까?

# 정답 코드
def bubble_sort(arr):
    for i in range(len(arr)):
        swapped = False
        for j in range(1, len(arr) - i):
            if arr[j] < arr[j - 1]:
                arr[j], arr[j - 1] = arr[j - 1], arr[j]
                swapped = True
        if not swapped:  # 한 번도 교환이 없으면 정렬 완료
            break
    return arr