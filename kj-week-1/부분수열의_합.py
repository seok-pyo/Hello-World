# import sys
# # sys.path.append("/Users/seokpyohong/Documents/Hello-World/kj-week-1/function_visualizer")

# # from function_visualizer import FunctionVisualizer

# # visualizer = FunctionVisualizer()

# import sys
# sys.setrecursionlimit(10**6)

# n, s = map(int, input().split())
# numbers = list(map(int, input().split()))

# flag = [False] * n

# cnt = 0
# part = []

# def partial(part, idx):
#     global cnt
#     # if not part:
#     #     return


#     if sum(part) == s and len(part) != 0:
#         # print(part)
#         cnt += 1

#     for i in range(idx, n):
#         # if el not in part:
#             # print(part)
#         # if not flag[i]:
#             # flag[i] = True
#         part.append(numbers[i])
#         partial(part, i + 1)
#         # else:
#             # flag[i] = False
#         part.remove(numbers[i])
#         # partial(part, i + 1)
#         # if el in part:
#             # print(part)

# partial(part, 0)

# print(cnt)




n, s = map(int, input().split())

numbers = list(map(int, input().split()))

cnt = 0
pack = []

def partial(pack, target):
    global cnt
    if sum(pack) == target:
        cnt += 1
        return

    for item in numbers:
        if item not in pack:
            pack.append(item)
            partial(pack, target)
            pack.remove(item)

partial(pack, s)

print(cnt)

# 접근을 배열에 존재하는지 파악하는 식으로 구현하게 되면 조합에 중복이 발생할 수 있음
# if item not in pack 조건을 사용해도 중복 없이 조합을 검사할 수는 없음
# numbers 리스트에 같은 값이 여러 개가 있을 수 있고, 같은 값을 서로 다른 위치에서 선택한 것은 다른 경우로 쳐야 할 수도 있다.
# 부분 수열에서는 같은 값을 갖는 다른 조합이 유효할 수도 있기 때문에, pack 리스트에 존재하는지를 확인하는 것은 문제를 풀 수 없다.

# 결론적으로 pack에 원소가 들어가 있는지 안 들어가 있는지를 확인하는 것이 아니라
# 전체 집합에서 각 원소들의 순서를 유지하면서 선택해서, 각각의 원소가 들어가고 안들어가는 2가지 경우를 확인하는 것이 맞다.







