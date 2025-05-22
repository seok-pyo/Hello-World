a = int(input())
b = int(input())
c = int(input())

sum = a * b * c
result = [0] * 10
def solution():
    for i in str(sum):
        result[int(i)] += 1

    for j in result:
        print(str(j))

solution()