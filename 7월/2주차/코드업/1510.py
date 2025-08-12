n = int(input())
magic = [[0] * n for _ in range(n)]

row, col = 0, n // 2
magic[row][col] = 1

for num in range(2, n * n + 1):
    new_row = (row - 1) % n
    new_col = (col + 1) % n

    if num % n == 1:
        new_row = (row + 1) % n
        new_col = col

    magic[new_row][new_col] = num
    row, col = new_row, new_col

for r in magic:
    print(*r)
