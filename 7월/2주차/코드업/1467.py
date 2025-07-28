n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]

num = 1
for j in range(m-1, -1, -1):    
    for i in range(n):     
        a[i][j] = num
        num += 1

for i in range(n):
    print(*a[i])
