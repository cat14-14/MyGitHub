n = int(input())
arr = [[0] * n for _ in range(n)]

num = 1
top, bottom, left, right = 0, n - 1, 0, n - 1

while left <= right and top <= bottom:
    for i in range(top, bottom + 1):
        arr[i][left] = num
        num += 1
    left += 1

    for i in range(left, right + 1):
        arr[bottom][i] = num
        num += 1
    bottom -= 1

    for i in range(bottom, top - 1, -1):
        arr[i][right] = num
        num += 1
    right -= 1

    for i in range(right, left - 1, -1):
        arr[top][i] = num
        num += 1
    top += 1

for row in arr:
    print(*row)
