def gcd(x, y):
    if y == 0:
        return x
    else:
        return gcd(y, x % y)

if __name__ == '__main__':
    print('두 정숫값의 최대공약수를 구합니다.')

    x = int(input('첫 번째 수'))
    y = int(input('두 번째 수'))

    print(gcd(x, y))