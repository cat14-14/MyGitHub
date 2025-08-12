import sys

vals = list(map(int, sys.stdin.read().split()))
it = iter(vals)

N = 10
g = [[next(it) for _ in range(N)] for _ in range(N)]
n = next(it)
players = [(next(it)-1, next(it)-1) for _ in range(n)]

exploded = [[False]*N for _ in range(N)]
for i in range(N):
    for j in range(N):
        if g[i][j] > 0:
            r, c = i, j
            exploded[r][c] = True
            power = g[i][j]
            for dr, dc in ((-1,0),(1,0),(0,-1),(0,1)):
                for s in range(1, power+1):
                    nr, nc = r + dr*s, c + dc*s
                    if not (0 <= nr < N and 0 <= nc < N):
                        break
                    if g[nr][nc] == -1:
                        break
                    exploded[nr][nc] = True

board = [[0]*N for _ in range(N)]
for i in range(N):
    for j in range(N):
        if g[i][j] == -1:
            board[i][j] = -1
        elif exploded[i][j]:
            board[i][j] = -2
        else:
            board[i][j] = 0

survive = []
for idx, (r, c) in enumerate(players, start=1):
    if board[r][c] == -2:
        survive.append(False)
    else:
        survive.append(True)
        board[r][c] = idx

out_lines = []
for i in range(N):
    out_lines.append(' '.join(map(str, board[i])) + ' ')
out_lines.append("Character Information")
for i, ok in enumerate(survive, start=1):
    out_lines.append(f"player {i} {'survive' if ok else 'dead'}")

sys.stdout.write('\n'.join(out_lines))
