n = int(input())
a = []
if n == 0:
    print(0)
else:
    while n > 0:
        a.append(n % 2)
        n //= 2
    for i in range(len(a) - 1, -1, -1):
        print(a[i], end="")