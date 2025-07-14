n = int(input())
a = []
for i in range(n):
    b = int(input())
    a.append(b)

for i in range(n):
    for j in range(i+1, n):
        if a[i] > a[j]:
            a[i], a[j] = a[j], a[i]

for i in a:
    print(i)