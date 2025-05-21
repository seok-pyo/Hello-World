n = int(input())
result = set()

for _ in range(n):
    result.add(input())

myList = list(result)

# sorted(myList, key=len)
# sorted(myList)

# sorted(myList)

myList.sort()
myList.sort(key=len)

for i in myList:
    print(i)

