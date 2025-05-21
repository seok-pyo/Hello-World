import sys
sys.path.append("/Users/seokpyohong/Documents/Hello-World/krafton-jungle/function_visualizer")

from function_visualizer import FunctionVisualizer


# sys.setrecursionlimit(10**6)

visualizer = FunctionVisualizer()

n = int(input())

@visualizer.visualize(param_names=["n"],show_execution_order=True)
def fac(n):
    if n == 1:
        return 1

    return n * fac(n-1)

print(fac(n))

# n = int(input())

# @visualizer.visualize(param_names=["n"],show_execution_order=True)
# def fac(n):
#     result = 1
#     for i in range(1, n+1):
#         result *= i

#     return result

# print(fac(n))
visualizer.render("abc","png")