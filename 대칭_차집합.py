a_num, b_num = map(int, input().split())

a = set(map(int, input().split()))
b = set(map(int, input().split()))

a_cnt, b_cnt = 0, 0

for a_e in a:
    if a_e in b:
        continue
    a_cnt += 1

for b_e in b:
    if b_e in a:
        continue
    b_cnt += 1

print(a_cnt + b_cnt)

