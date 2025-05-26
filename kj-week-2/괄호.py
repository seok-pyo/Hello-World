t = int(input())

for _ in range(t):
    paren = input()

    stack = []
    for i in paren:

        if len(stack) != 0:
            top = stack[-1]

            if top == '(' and i == ')':
                stack.pop()
            else:
                stack.append(i)
        else:
            stack.append(i)

    if len(stack) != 0:
        print('NO')
    else:
        print('YES')




