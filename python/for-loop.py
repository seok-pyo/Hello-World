# for i in range(6, 0, -1):
#   print(i)

# n = 6
# count = 1
# for k in range(n, 0, -1):
#   for j in range(count, count + k):
#     count += n
#     print(count, 'this is count')
#     print(j, 'this is j')

def solution(n):
    # 1. 삼각형 구조 생성
    triangle = [[0] * (i + 1) for i in range(n)]
    
    # 2. 달팽이 채우기 초기 설정
    x, y = -1, 0  # 시작 위치 (초기값 설정)
    num = 1       # 채울 값
    direction = [(1, 0), (0, 1), (-1, -1)]  # 아래, 오른쪽, 대각선 위 k-1
    
    # 3. 달팽이 채우기
    for i in range(n):
        for _ in range(n - i): # k-2
            dx, dy = direction[i % 3]  # 현재 방향 선택 # k-3
            x += dx
            y += dy
            triangle[x][y] = num
            num += 1
    
    # 4. 결과 배열 생성
    result = []
    for row in triangle:
        result.extend(row)
    
    return result

print(solution(4))
