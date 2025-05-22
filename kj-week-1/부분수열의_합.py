import sys
# sys.path.append("/Users/seokpyohong/Documents/Hello-World/kj-week-1/function_visualizer")

# from function_visualizer import FunctionVisualizer

# visualizer = FunctionVisualizer()

import sys
sys.setrecursionlimit(10**6)

n, s = map(int, input().split())
numbers = list(map(int, input().split()))

flag = [False] * n

cnt = 0
part = []

def partial(part, idx):
    global cnt
    # if not part:
    #     return


    if sum(part) == s and len(part) != 0:
        # print(part)
        cnt += 1

    for i in range(idx, n):
        # if el not in part:
            # print(part)
        # if not flag[i]:
            # flag[i] = True
        part.append(numbers[i])
        partial(part, i + 1)
        # else:
            # flag[i] = False
        part.remove(numbers[i])
        # partial(part, i + 1)
        # if el in part:
            # print(part)

partial(part, 0)

print(cnt)

# visualizer.render("hanoi","png")


