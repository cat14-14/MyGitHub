n = int(input())
a = [[0]*n for _ in range(n)]

for i in range(n):
    num = i+1
    for j in range(n):
        a[i][j] = num
        num += n

for row in a:
    print(*row)
