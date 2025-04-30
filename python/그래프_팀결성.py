n, m = map(int, input().split())

# 정수리스트로 초기화 하는것이 더 깔끔하다.
parent = [[] for i in range(n + 1)]
# 아래처럼
# parent = [0] * (n + 1)

# 문제를 잘 읽고, 파악하는 것이 중요하다. 문제에서는 0번부터라고 명시하고 있다.
# for i in range(0, n + 1): < 이렇게 작성하는게 맞다.
for i in range(1, n + 1):
    parent[i] = i

def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b

result = []

for _ in range(m):
    t, a, b = map(int, input().split())
    if t == 0:
        union_parent(parent, a, b)
    else:
        if find_parent(parent, a) == find_parent(parent, b):
            result.append('YES')
        else:
            result.append('NO')

for r in result:
    print(r)