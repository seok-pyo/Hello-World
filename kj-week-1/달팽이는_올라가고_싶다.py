# def solution():
#     a, b, v = map(int, input().split())
#     days = 0
#     moves = 0
#     while True:
#         days += 1
#         moves += a
#         if moves >= v:
#             print(days)
#             return
#         moves -= b

# solution()

def solution():
    a, b, v = map(int, input().split())
    days = 0
    v = v - a
    days += 1
    days += (v // (a - b))

    if v % (a - b) != 0:
        days += 1
    print(days)

solution()
