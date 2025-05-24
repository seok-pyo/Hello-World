n = int(input())

paper = [list(map(int, input().split())) for _ in range(n)]

white = 0
blue = 0

def cut(row, col, size):
    global white
    global blue

    if size == 1:
        if paper[row][col] == 1:
            blue+=1
        else:
            white+=1
        return

    first = paper[row][col]
    for i in range(row, row + size):
        for j in range(col, col + size):
            if paper[i][j] != first:
                cut(row, col, size//2)
                cut(row + size//2, col, size//2)
                cut(row, col + size//2, size//2)
                cut(row + size//2, col + size//2, size//2)
                return

    if paper[i][j] == 1:
        blue += 1
    else:
        white += 1
    return


cut(0, 0, n)

print(white)
print(blue)
