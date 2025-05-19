arr = [6,4,3]

def selection_sort(a):
    idx = 0
    n = len(a)

    min_num = 999999999
    for i in range(n - 1):
       for j in range(i + 1, n):
            if min_num > a[j]:
                min_num = a[j]
                idx = j
       a[i], a[idx] = a[idx], a[i]

selection_sort(arr)

print(arr)

### 위 코드에는 문제가 존재.. 무엇이 문제인지 이해할 것.





