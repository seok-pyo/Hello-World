w, h = map(int, input().split())
block = list(map(int, input().split()))

left, right = 0, len(block) - 1
left_max = right_max = 0
water = 0

while left <= right:
    if block[left] < block[right]:
        left_max = max(left_max, block[left])
        water += left_max - block[left]
        left += 1
    else:
        right_max = max(right_max, block[right])
        water += right_max - block[right]
        right -= 1

print(water)






