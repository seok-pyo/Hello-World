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

arr = [6,4,3,7,1,9,8]

def bubble_sort(a):
    n = len(a)
    for i in range(n - 1):
        for j in range(n - 1, i, -1):
            if a[j - 1] > a[j]:
                a[j - 1], a[j] = a[j], a[j - 1]

# bubble_sort(arr)
# print(arr)

string = "Geeks"

def test(string):
    string = "GeeksforGeeks"
    print("Inside Funtion", string)

test(string) # 안 바뀜. 재할당만 됨.
print("Outside Function:", string)

def add_more(list):
    list.append(50)
    print("Inside Function", list)

my_list = [10, 20, 30, 40]
add_more(my_list)
print("Outside Function:", my_list)
