grid = [[0]*100 for _ in range(100)]
for _ in range(4):
    x1, y1, x2, y2 = map(int, input().split())
    lx, rx = min(x1, x2), max(x1, x2)
    by, ty = min(y1, y2), max(y1, y2)
    for x in range(lx, rx):
        for y in range(by, ty):
            grid[x][y] = 1
print(sum(sum(row) for row in grid))
