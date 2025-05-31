# n = int(input())

# cards = list(map(int, input().split()))

# m = int(input())

# calls = list(map(int, input().split()))

# cards.sort()

# result = []

# def find_card():
#     for call in calls:
#         start = 0
#         end = n - 1
#         found = False

#         while start <= end:
#             mid = (start + end) // 2
#             if cards[mid] > call:
#                 end = mid - 1
#             elif cards[mid] < call:
#                 start = mid + 1
#             else:
#                 found = True
#                 result.append(1)
#                 break

#         if not found:
#             result.append(0)

# find_card()

# print(*result)

n = int(input())
have_list = list(map(int, input().split())) # 상근이가 가지고 있는 카드

m = int(input())
check_list = list(map(int, input().split())) # 확인 목록

have_list = {x for x in have_list}

for check in check_list:
    print(1 if check in have_list else 0, end=' ')