# import sys
# input = sys.stdin.readline

# pre_order = []

# while True:
#     try:
#         pre_order.append(int(input()))
#     except:
#         break

# def postorder(start, end):
#     if start > end:
#         return

#     root = pre_order[start]
#     idx = start + 1

#     while idx <= end and root > pre_order[idx]:
#         idx += 1

#     postorder(start + 1, idx - 1)
#     postorder(idx, end)
#     print(root)

# postorder(0, len(pre_order) - 1)

pre_order = []

while True:
    try:
        pre_order.append(int(input()))
    except:
        break

def post_order(start, end):
    if start > end:
        return

    root = pre_order[start]
    idx = start + 1

    while idx <= end and root > pre_order[idx]:
        idx += 1

    post_order(start + 1, idx - 1)
    post_order(idx, end)
    print(root)

post_order(0, len(pre_order) - 1)