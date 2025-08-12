n = int(input().strip())
a = [[0] * n for _ in range(n)]

cur = 1
for s in range(n - 1, 2 * n - 1):
    i_start = max(0, s - (n - 1))
    i_end = min(n - 1, s)
    if (s - (n - 1)) % 2 == 0:
        rng = range(i_end, i_start - 1, -1)
    else:
        rng = range(i_start, i_end + 1)
    for i in rng:
        j = s - i
        a[i][j] = cur
        cur += 1

for row in a:
    print(' '.join(map(str, row)), end=' \n')
