steps = []
step = int(input())
table = [0] * (step)

for _ in range(step):
    steps.append(int(input()))

def solution():

    if step == 1:
        return steps[0]

    if step == 2:
        return max(steps[1], steps[1] + steps[0])

    table[0] = steps[0]
    table[1] = steps[0] + steps[1]
    table[2] = max(steps[1] + steps[2], steps[0] + steps[2])

    for i in range(3, step):
        table[i] = steps[i] + max(table[i - 2], steps[i - 1] + table[i - 3])

    return table[-1]

print(solution())
