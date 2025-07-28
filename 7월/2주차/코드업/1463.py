n = int(input())
a = [[0]*n for _ in range(n)]

num = 1
for col in range(n):
    for row in range(n):
        a[row][col] = num
        num += 1

for row in reversed(range(n)):
    print(*a[row])
