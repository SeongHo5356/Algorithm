import sys

sys.setrecursionlimit(10000)

def explore(grid, row, col, label, rows, cols):
    grid[row][col] = label
    if row != 0 and grid[row-1][col] == 1:
        explore(grid, row-1, col, label, rows, cols)
    if col != cols-1 and grid[row][col+1] == 1:
        explore(grid, row, col+1, label, rows, cols)
    if row != rows-1 and grid[row+1][col] == 1:
        explore(grid, row+1, col, label, rows, cols)
    if col != 0 and grid[row][col-1] == 1:
        explore(grid, row, col-1, label, rows, cols)

num_cases = int(sys.stdin.readline().strip())

for _ in range(num_cases):
    rows, cols, points = map(int, sys.stdin.readline().split())

    grid = [[0] * cols for _ in range(rows)]
    for _ in range(points):
        x, y = map(int, sys.stdin.readline().split())
        grid[x][y] = 1

    label = 2
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                explore(grid, row, col, label, rows, cols)
                label += 1

    sys.stdout.write(f"{label-2}\n")
