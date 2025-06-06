n = int(input())

tiles = [0] * (n + 1)

tiles[0] = 1
tiles[1] = 2

for i in range(2, n):
    tiles[i] = ((tiles[i-1]) % 15746 + (tiles[i-2]) % 15746) % 15746

print(tiles[n - 1])