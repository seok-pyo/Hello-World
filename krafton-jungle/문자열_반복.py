t = int(input())
for _ in range(t):
    result = []
    num, word = input().split()
    for w in word:
        result += (w * int(num))

    print(''.join(result))