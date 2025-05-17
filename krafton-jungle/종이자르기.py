w, h = map(int, input().split())
n = int(input())
wc = [0]
hc = [0]
for _ in range(n):
    o, l = map(int, input().split())
    if o == 1:
        wc.append(l)
    else:
        hc.append(l)

wc.sort()
hc.sort()
wc.append(w)
hc.append(h)

val = -999999999

ws = []
hs = []

for i in range(0, len(wc) - 1):
    width = wc[i + 1] - wc[i]
    ws.append(width)

for j in range(0, len(hc) - 1):
    height = hc[j + 1] - hc[j]
    hs.append(height)

result = []

for w in ws:
    for h in hs:
        result.append(w * h)

print(max(result))
