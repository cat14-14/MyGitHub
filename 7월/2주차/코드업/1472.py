n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]
num = 1

for i in range(n - 1, -1, -1):
    if (n - 1 - i) % 2 == 0:
        for j in range(m - 1, -1, -1):
            a[i][j] = num
            num += 1
    else:
        for j in range(m):
            a[i][j] = num
            num += 1

for i in range(n):
    for j in range(m):
        print(a[i][j], end=' ')
    print()
