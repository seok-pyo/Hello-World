vertex, edge = map(int, input().split())

def union(parent, a, b):
    a = find(parent, a)
    b = find(parent, b)

    if a < b:
        parent[b] = a
    else:
        parent[a] = b

def find(parent, a):
    if a != parent[a]:
        parent[a] = find(parent, parent[a])
    return parent[a]

parent = [0] * (vertex + 1)
edges = []
result = 0

for i in range(1, vertex + 1):
    parent[i] = i

for i in range(1, edge + 1):
    a, b, cost = map(int, input().split())
    edges.append((cost, a, b))

edges.sort()

for edge in edges:
    cost, a, b = edge

    if find(parent, a) != find(parent, b):
        union(parent, a, b)
        result += cost

print(result)