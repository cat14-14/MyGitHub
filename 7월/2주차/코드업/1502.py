n = int(input())
arr = [[0] * n for _ in range(n)]
num = 1
for col in range(n):
    for row in range(n):
        arr[row][col] = num
        num += 1
for row in arr:
    print(*row)
