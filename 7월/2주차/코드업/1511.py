n = int(input())
arr = [[0] * n for _ in range(n)]

num = 1
for i in range(n):
    for j in range(n):
        arr[i][j] = num
        num += 1

total = 0
for i in range(n):
    for j in range(n):
        if i == 0 or i == n - 1 or j == 0 or j == n - 1:
            total += arr[i][j]

print(total)
