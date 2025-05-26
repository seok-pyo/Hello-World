k = int(input())

result = 0
book = []

for _ in range(k):
    money = int(input())
    if money == 0:
        book.pop()
    else:
        book.append(money)

print(sum(book))