import sys

vals = list(map(int, sys.stdin.read().split()))
n = 25
g = [vals[i*n:(i+1)*n] for i in range(n)]
ng = [[0]*n for _ in range(n)]

dirs = [(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,-1),(1,0),(1,1)]

for i in range(n):
    for j in range(n):
        cnt = 0
        for di, dj in dirs:
            ni, nj = i+di, j+dj
            if 0 <= ni < n and 0 <= nj < n:
                cnt += g[ni][nj]
        if g[i][j] == 0 and cnt == 3:
            ng[i][j] = 1
        elif g[i][j] == 1 and (cnt <= 1 or cnt >= 4):
            ng[i][j] = 0
        else:
            ng[i][j] = g[i][j]

for row in ng:
    print(' '.join(map(str, row)), end=' \n')
