def so(a):
    n = len(a)
    for i in range(0, n-1):
        mi = i
        for j in range(i+1, n):
            if(a[j] < a[mi]):
                mi = j
        a[mi], a[i] = a[i], a[mi]

d = [2, 4, 5, 1, 3]
so(d)
print(d)

