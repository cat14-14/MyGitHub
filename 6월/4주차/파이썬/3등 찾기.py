num = int(input())
a = []
for i in range(num):
    n, s = input().split()
    a.append([n, int(s)])

for i in range(num):
    for j in range(i+1, num):
        if a[i][1] < a[j][1]:
            a[i], a[j] = a[j], a[i]
print(a[2][0])