n, c = map(int, input().split())
a = sorted(map(int, input().split()))

for i in range(n):
    print(a[i], end=' ')
    if (i + 1) % c == 0:
        print()
