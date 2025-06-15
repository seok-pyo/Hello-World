n = int(input())

words = []

numbers = {}

for i in range(n):
    words.append(input())

words.sort(key=len, reverse=True)

for word in words:
    for w in word:


