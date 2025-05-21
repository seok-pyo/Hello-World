n = int(input())
result = set()

for _ in range(n):
    result.add(input())

myList = list(result)

newlist = sorted(myList)
newlist = sorted(newlist, key=len)

# myList.sort()
# myList.sort(key=len)

# for i in myList:
#     print(i)

for i in newlist:
    print(i)

