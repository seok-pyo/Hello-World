import sys
sys.setrecursionlimit(1_000_000)

def dfs(x, y, grid):
    rows, cols = len(grid), len(grid[0])
    # 범위 먼저
    if not (0 <= x < rows and 0 <= y < cols):
        return 0
    if grid[x][y] == 0:
        return 0

    grid[x][y] = 0
    size = 1

    for dx in (-1, 0, 1):
        for dy in (-1, 0, 1):
            if dx == 0 and dy == 0:
                continue
            size += dfs(x + dx, y + dy, grid)

    return size

def connectedCell(matrix):
    if not matrix or not matrix[0]:
        return 0

    rows, cols = len(matrix), len(matrix[0])
    ans = 0
    for i in range(cols):
        for j in range(rows):
            if matrix[i][j] == 1:
                ans = max(ans, dfs(i, j, matrix))

    return ans