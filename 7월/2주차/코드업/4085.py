import sys

data = list(map(int, sys.stdin.read().split()))
m, n, x, y = data[:4]
vals = data[4:]

g = [vals[i*m:(i+1)*m] for i in range(n)]

ps = [[0]*(m+1) for _ in range(n+1)]
for i in range(n):
    row_sum = 0
    for j in range(m):
        row_sum += g[i][j]
        ps[i+1][j+1] = ps[i][j+1] + row_sum

best = -1
for i in range(n - y + 1):
    i2 = i + y
    for j in range(m - x + 1):
        j2 = j + x
        s = ps[i2][j2] - ps[i][j2] - ps[i2][j] + ps[i][j]
        if s > best:
            best = s

print(best)
