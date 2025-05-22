import sys
sys.path.append("/Users/seokpyohong/Documents/Hello-World/krafton-jungle/function_visualizer")

from function_visualizer import FunctionVisualizer

visualizer = FunctionVisualizer()

n = int(input())
c = [0] * 100

@visualizer.visualize(param_names=["n"],show_execution_order=True)
def hanoi(n, start, mid, end):
    if n == 0:
        return
    hanoi(n - 1, start, end, mid)
    print(start, end)
    hanoi(n - 1, mid, start, end)

def count(n):
    for i in range(0, n):
        c[i] = c[i - 1] * 2 + 1

def sol(n):
    count(n)
    if n <= 20:
        print(c[n - 1])
        hanoi(n, 1, 2, 3)
    else:
        print(c[n - 1])

sol(n)

visualizer.render("hanoi","png")
