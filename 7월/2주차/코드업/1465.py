n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]

num = 1
for i in range(n-1, -1, -1):
    for j in range(m):
        a[i][j] = num
        num += 1

for row in a:
    print(*row)
