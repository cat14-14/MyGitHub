import sys

it = iter(map(int, sys.stdin.read().split()))
a = next(it); b = next(it)
x = next(it); y = next(it); z = next(it)

g = [[0]*(b+2) for _ in range(a+2)]
for i in range(1, a+1):
    for j in range(1, b+1):
        g[i][j] = next(it)

k = next(it)

for _ in range(k):
    ng = [[0]*(b+2) for _ in range(a+2)]
    for i in range(1, a+1):
        row_im1 = g[i-1]; row_i = g[i]; row_ip1 = g[i+1]
        for j in range(1, b+1):
            cnt = (row_im1[j-1] + row_im1[j] + row_im1[j+1] +
                   row_i[j-1]               + row_i[j+1] +
                   row_ip1[j-1] + row_ip1[j] + row_ip1[j+1])
            if g[i][j] == 0:
                if cnt == x:
                    ng[i][j] = 1
            else:
                ng[i][j] = 0 if (cnt < y or cnt >= z) else 1
    g = ng

out = []
for i in range(1, a+1):
    out.append(' '.join(map(str, g[i][1:b+1])) + ' ')
sys.stdout.write('\n'.join(out))
