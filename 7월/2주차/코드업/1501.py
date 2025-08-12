n = int(input())
num = 1
for _ in range(n):
    row = []
    for _ in range(n):
        row.append(num)
        num += 1
    print(*row)
