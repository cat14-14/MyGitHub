n = int(input())
arr = [[0] * n for _ in range(n)]
num = 1

for col in range(n):
    if col % 2 == 0:
        for row in range(n):
            arr[row][col] = num
            num += 1
    else:
        for row in range(n-1, -1, -1):
            arr[row][col] = num
            num += 1

for row in arr:
    print(*row)
