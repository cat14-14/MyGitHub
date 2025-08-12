n = int(input())
arr = [[0] * n for _ in range(n)]
num = 1

for i in range(n):
    if i % 2 == 0:
        for j in range(n):
            arr[i][j] = num
            num += 1
    else:
        for j in range(n-1, -1, -1):
            arr[i][j] = num
            num += 1

for row in arr:
    print(*row)
