n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]

num = n * m
for i in range(n):
    for j in range(m):
        a[i][j] = num
        num -= 1

for row in a:
    print(*row)
