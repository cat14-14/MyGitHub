n = int(input())
x, y = map(int, input().split())

for i in range(1, n + 1):
    for j in range(1, n + 1):
        print(abs(i - x) + abs(j - y) + 1, end=" ")
    print()
