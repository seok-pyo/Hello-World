def solution(s):
    answer = ''
    s=s.split()
    for word in s:
        for i in range(len(word)):
            if i % 2 == 0: word[i] = word[i].upper()
            else: word[i] = word[i].lower()

    return " ".join(s)

s = "try hello world"
s = list(s)
print(s)
