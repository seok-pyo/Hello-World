n, s = map(int, input().split())

numbers = list(map(int, input().split()))
res = 0
cnt = 0
part = []

def partial(s, part):
    global res
    global cnt

    # 배열 범위 합으로 접근, 잘못된 접근
    # for i in range(n, 0, -1):
    #     for j in range(n-i, i):
    #         res = sum(numbers[i:j])
    #         if res == s:
    #             cnt += 1




