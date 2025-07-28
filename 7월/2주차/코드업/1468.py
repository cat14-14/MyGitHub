n,m = map(int, input().split())
a = 1
for i in range(n):
    for j in range(m):
        print(a, end=" ")
        a+=1
    print()