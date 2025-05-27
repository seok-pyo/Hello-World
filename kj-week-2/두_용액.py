# n = int(input())

# liquid = list(map(int, input().split()))

# liquid.sort()

# start = 0
# end = n - 1
# result = ()

# def find_zero():
#     closest_zero = float('inf')
#     global start
#     global end
#     global result

#     sum = 0
#     while start <= end:
#         sum = abs(liquid[start] + liquid[end])

#         # closest_zero = min(closest_zero, sum)
#         if closest_zero > sum:
#             closest_zero = sum
#             result = (liquid[start], liquid[end])

#         if sum > 0:
#             end -= 1
#         elif sum < 0:
#             start += 1
#         elif sum == 0:
#             return

# find_zero()

# print(result[0], result[1])


# n = int(input())

# liquid = list(map(int, input().split()))

# liquid.sort()

# first = 0
# last = n - 1
# closest_zero = float('inf')

# result = [0, 0]

# def mixed_liquid():
#     global closest_zero
#     global first
#     global last
#     sum = abs(liquid[first] + liquid[last])

#     if closest_zero > sum:
#         closest_zero = sum
#         result[0], result[1] = liquid[first], liquid[last]

#     while first <= last:
#         if sum > 0:
#             last -= 1
#         elif sum < 0:
#             first += 1
#         else:
#             result[0], result[1] = liquid[first], liquid[last]
#             return

# mixed_liquid()

# print(result)

n = int(input())
liquid = list(map(int, input().split()))
liquid.sort()

result = [0, 0]
start = 0
end = n - 1
closest_zero = float('inf')

def mix_liquid(start, end):
    global closest_zero
    mix_liq = liquid[start] + liquid[end]
    abs_liq = abs(mix_liq)

    if start >= end:
        return

    if mix_liq == 0:
        result[0], result[1] = liquid[start], liquid[end]
        return

    if closest_zero > abs_liq:
        result[0], result[1] = liquid[start], liquid[end]
        closest_zero = abs_liq

    if mix_liq < 0:
        mix_liquid(start + 1, end)
    elif mix_liq > 0:
        mix_liquid(start, end - 1)
    else:
        return

mix_liquid(start, end)

print(result[0], result[1])


