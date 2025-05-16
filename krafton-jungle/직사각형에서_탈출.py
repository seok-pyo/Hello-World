def solution():
    x, y, w, h = map(int, input().split())
    wm = min(w - x, x)
    hm = min(h - y, y)
    return min(wm, hm)

print(solution())