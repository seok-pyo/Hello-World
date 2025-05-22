def solution():
    a = int(input())
    b = int(input())
    result = 0
    for i in range(3):
        print(a * (b % 10))
        result += a * (b % 10) * pow(10, i)
        b = (b // 10)
    return result

print(solution())


