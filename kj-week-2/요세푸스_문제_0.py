from collections import deque

n, k = map(int, input().split())

people = deque([x for x in range(1, n + 1)])
result = []

while len(people) != 1:
    for _ in range(k - 1):
        out = people.popleft()
        people.append(out)

    out = people.popleft()
    result.append(out)

result.append(people[0])

print(f'<{', '.join(map(str, result))}>')

# 문제를 잘 읽는 것을 습관으로 만들자.