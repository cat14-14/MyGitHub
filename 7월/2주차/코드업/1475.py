n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]
num = 1

for j in range(m - 1, -1, -1):  
    if (m - 1 - j) % 2 == 1:   
        for i in range(n - 1, -1, -1):
            a[i][j] = num
            num += 1
    else:        
        for i in range(n):
            a[i][j] = num
            num += 1

for i in range(n):
    for j in range(m):
        print(a[i][j], end=' ')
    print()
