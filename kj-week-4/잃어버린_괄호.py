# input_val = input()

# word = ''

# plus = []
# minus = []

# for i in input_val:
#     if i == '+':
#         if word != '':
#            plus.append(int(word))
#            word = ''
#     elif i == '-':
#         if word != '':
#            minus.append(int(word))
#            word = ''
#     word += i

# # plus.append(int(word))

# # print(numbers)

# print(plus)
# print(minus)


# - - - - -

# numbers = input()

# plus = []
# minus = []

# nums = ''
# for i in numbers:
#     if i != '-' or i != '+':

#     if i == '-':
#         minus.append(nums)
#         nums = ''
#     elif i == '+':
#         plus.append(nums)
#         nums = ''
#     else:
#         nums += i

# print(plus, minus)

expressions = input().split('-')
# print(expressions)

result = sum(map(int, expressions[0].split('+')))

for part in expressions[1:]:
    result -= sum(map(int, part.split('+')))

print(result)