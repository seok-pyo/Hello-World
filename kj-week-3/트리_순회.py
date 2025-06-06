# 트리 입렵을 받기
n = int(input())
trees = {}
for _ in range(n):
    node, left, right = input().split()
    trees[node] = (left, right)

result_pre = []
result_mid = []
result_pos = []

def traverse_pre(node):
    if node == '.':
        return

    result_pre.append(node)
    traverse_pre(trees[node][0])
    traverse_pre(trees[node][1])

def traverse_mid(node):
    if node == '.':
        return

    traverse_mid(trees[node][0])
    result_mid.append(node)
    traverse_mid(trees[node][1])

def traverse_post(node):
    if node == '.':
        return

    traverse_post(trees[node][0])
    traverse_post(trees[node][1])
    result_pos.append(node)

traverse_pre('A')
traverse_mid('A')
traverse_post('A')

print(*result_pre, sep='')
print(*result_mid, sep='')
print(*result_pos, sep='')