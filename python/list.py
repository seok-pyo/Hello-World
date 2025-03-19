grid = ['.' for _ in range(5)]
print(grid)

grid2 = [['.' for _ in range(10)] for _ in range(5)]

answer = []

for row in grid2:
  answer.append(''.join(row));

print(answer)

# --------------
def solution(line):
    answer = []
    x = []
    y = []
    x_length = 0
    y_length = 0
    
    # ax, ix = 0, 0
    # ay, iy = 0, 0
    ax, ay = 0, 0
    
    # maxX = float('-inf')
    # minX = float('inf')
    # maxY = float('-inf')
    # minY = float('inf')
    
#1. 이중 반복문으로 순회하면서 교점이 있는지 찾는다. 그리고 배열에 저장
    for i in line:
        for j in line:
            if (i[0] * j[1]) - (i[1] * j[0]) == 0:
                continue
            # else:
                # ax = ((i[1] * j[2]) - (i[2] * j[1])) / ((i[0] * j[1]) - (i[1] * j[0]))
                # ay = ((i[2] * j[0]) - (i[0] * j[2])) / ((i[0] * j[1]) - (i[1] * j[0]))
                # ix = ((i[1] * j[2]) - (i[2] * j[1])) / ((i[0] * j[1]) - (i[1] * j[0]))
                # iy = ((i[2] * j[0]) - (i[0] * j[2])) / ((i[0] * j[1]) - (i[1] * j[0]))
                # if ax > maxX: maxX = ax
                # if ay > maxY: maxY = ay
                # if ix < minX: minX = ix
                # if iy < minY: minY = iy 
            ax = ((i[1] * j[2]) - (i[2] * j[1])) / ((i[0] * j[1]) - (i[1] * j[0]))
            ay = ((i[2] * j[0]) - (i[0] * j[2])) / ((i[0] * j[1]) - (i[1] * j[0]))
            
            # maxX = max(maxX, ax)
            # maxY = max(maxY, ay)
            # minX = min(minX, ax)
            # minY = min(minY, ay)
            
            if ax.is_integer() and ay.is_integer():
                x.append(int(ax))
                y.append(int(ay))
            
            x_length = int((max(x) - min(x)) / 2) + 1
            y_length = int((max(y) - min(y)) / 2) + 1
    
    grid = [['.' for _ in range(x_length + 1)] for _ in range(y_length + 1)]
    
    coor = set(list(zip(x, y)))
    
    for xi, yi in coor:
        grid[yi - y_length][xi + x_length] = '*'
    
    for row in grid:
        answer.append(''.join(row))
    
    return answer

# ----- 통과 코드

def solution(line):
    answer = []
    x = []
    y = []
    x_length = 0
    y_length = 0

    ax, ay = 0, 0
    

    for i in line:
        for j in line:
            if (i[0] * j[1]) - (i[1] * j[0]) == 0:
                continue

            ax = ((i[1] * j[2]) - (i[2] * j[1])) / ((i[0] * j[1]) - (i[1] * j[0]))
            ay = ((i[2] * j[0]) - (i[0] * j[2])) / ((i[0] * j[1]) - (i[1] * j[0]))

            if ax.is_integer() and ay.is_integer():
                x.append(int(ax))
                y.append(int(ay))
            
            x_min = min(x)
            x_max = max(x)
            y_min = min(y)
            y_max = max(y)
             
            x_length = x_max - x_min + 1
            y_length = y_max - y_min + 1
            

    grid = [['.' for _ in range(int(x_length))] for _ in range(int(y_length))]
    
    coor = set(zip(x, y))
    
    for xi, yi in coor:
        # row_index = int((y_length / 2) - yi)
        # col_index = int(xi - (x_length / 2 + 1))
        # # if 0 <= row_index < len(grid) and 0 <= col_index < len(grid[0]):
        # grid[row_index][col_index] = '*'
        nx = xi + abs(x_min) if x_min < 0 else xi - x_min
        ny = yi + abs(y_min) if y_min < 0 else yi - y_min
        grid[ny][nx] = '*'
    
    for row in grid:
        answer.append(''.join(row))
    

    return answer[::-1]


# - - - - -

def solution(line):
    answer = []
    co = []
    
    x_min = y_min = int(1e15)
    x_max = y_max = -int(1e15)
    
    for i in line:
        for j in line:
            if (i[0] * j[1]) - (i[1] * j[0]) == 0:
                continue

            ax = ((i[1] * j[2]) - (i[2] * j[1])) / ((i[0] * j[1]) - (i[1] * j[0]))
            ay = ((i[2] * j[0]) - (i[0] * j[2])) / ((i[0] * j[1]) - (i[1] * j[0]))

            if ax.is_integer() and ay.is_integer():
                co.append([ax, ay])
            
                if x_min > ax : x_min = ax
                if y_min > ay : y_min = ay
                if x_max < ax : x_max = ax
                if y_max < ay : y_max = ay
             
    x_length = x_max - x_min + 1
    y_length = y_max - y_min + 1
            

    grid = [['.'] * int(x_length) for _ in range(int(y_length))]
    
    for xi, yi in co:
        nx = xi + abs(x_min) if x_min < 0 else xi - x_min
        ny = yi + abs(y_min) if y_min < 0 else yi - y_min
        grid[int(ny)][int(nx)] = '*'
    
    for row in grid:
        answer.append(''.join(row))
    
    return answer[::-1]

# - - - - -

def solution(line):
    answer = []
    co = []
    n = len(line)
    
    x_min = y_min = int(1e15)
    x_max = y_max = -int(1e15)
    
    for i in range(n):
        a, b, e = line[i]
        for j in range(i + 1, n):
            c, d, f = line[j]
            if a * d == b * c:
                continue

            x = (b * f - e * d) / (a * d - b * c)
            y = (e * c - a * f) / (a * d - b * c)

            if x == int(x) and y == int(y):
                x = int(x)
                y = int(y)
            
                co.append([x, y])
            
                if x_min > x : x_min = x
                if y_min > y : y_min = y
                if x_max < x : x_max = x
                if y_max < y : y_max = y
                
    x_length = x_max - x_min + 1
    y_length = y_max - y_min + 1
            

    grid = [['.'] * x_length for _ in range(y_length)]
    
    for xi, yi in co:
        nx = xi + abs(x_min) if x_min < 0 else xi - x_min
        ny = yi + abs(y_min) if y_min < 0 else yi - y_min
        grid[ny][nx] = '*'
    
    for row in grid:
        answer.append(''.join(row))
    
    return answer[::-1]
