grid = [list(map(int, input().split())) for _ in range(10)]
x=1
y=1
while True:
    if grid[x][y] == 0:
        grid[x][y] = 9
    elif grid[x][y] == 2:
        grid[x][y] = 9
        break

    if grid[x][y + 1] != 1:
        y += 1
    elif grid[x + 1][y] != 1:
        x += 1
    else:
        break

for row in grid:
    print(' '.join(map(str, row)))