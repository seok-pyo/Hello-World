import sys
input = sys.stdin.readline

n = int(input())

stack_list = []

for _ in range(n):
    word = input().split()
    # print(stack_list)

    if word[0] == 'push':
        stack_list.append(word[1])
    if word[0] == 'pop':
        if len(stack_list) != 0:
            pop_element = stack_list.pop()
            print(pop_element)
        else:
            print(-1)
    if word[0] == 'size':
        print(len(stack_list))
    if word[0] == 'empty':
        if len(stack_list) != 0:
            print(0)
        else:
            print(1)
    if word[0] == 'top':
        if len(stack_list) != 0:
            print(stack_list[-1])
        else:
            print(-1)


