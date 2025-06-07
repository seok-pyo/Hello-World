# --------- 1차 시도

# def search(weight, cnt, value):
    # if weight <= 0:
    #     return
    # if cnt >= n:
    #     return value

    # for item in items:
    #     value = max(search(weight + item[0], cnt + 1, value + item[1]), search(weight, cnt + 1, value))

    # return value

# --------- 2차 시도

# n, k = map(int, input().split())

# items = []
# table = [0] * (k + 1)

# for _ in range(n):
#     items.append((list(map(int, input().split()))))

# for item in items:
#     table[item[0]] = item[1]

# def search():
#     for i in range(1, k + 1):
#         for item in items:
#             # if i - item[0] >= 0:
#             #     table[i] = max(table[i - item[0]] + table[i], table[i])
#             if i - item[0] >= 0:
#                 table[i] = max(table[i - item[0]] + table[i], table[i])

# search()
# # print(table)

# print(max(table))

# --------- 3차 시도

n, k = map(int, input().split())

items = []
table = [0] * (k + 1)

for _ in range(n):
    items.append((list(map(int, input().split()))))

# 초기값 세팅 삭제
# for item in items:
#     table[item[0]] = item[1]

def search():
    # 무한 루프 가방이면 뒤에서 부터 반복
    # item의 순서 변경

    for item in items:
        for i in range(k, item[0] - 1, -1):
            if i - item[0] >= 0:
                # table[i]를 item[1](현 가치로) 수정
                table[i] = max(table[i - item[0]] + item[1], table[i])

search()
# print(table)

print(max(table))

# --------- 4차 시도

# n, k = int(input().split())

# graph = []