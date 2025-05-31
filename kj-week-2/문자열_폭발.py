string = input()
c4_string = input()

stack = []

for s in string:
    stack.append(s)
    while len(stack) >= len(c4_string):
        if ''.join(stack[-len(c4_string):]) == c4_string:
            for _ in range(len(c4_string)):
                stack.pop()
        else:
            break


if stack:
    print(''.join(stack))
else:
    print('FRULA')