import sys

vals = list(map(int, sys.stdin.read().split()))
n = 9
g = [vals[i*n:(i+1)*n] for i in range(n)]
r, c = vals[n*n], vals[n*n+1]
r -= 1; c -= 1

if g[r][c] == 1:
    print(-1)
else:
    cnt = 0
    for dr in (-1, 0, 1):
        for dc in (-1, 0, 1):
            if dr == 0 and dc == 0:
                continue
            nr, nc = r + dr, c + dc
            if 0 <= nr < n and 0 <= nc < n:
                cnt += g[nr][nc]
    print(cnt)
