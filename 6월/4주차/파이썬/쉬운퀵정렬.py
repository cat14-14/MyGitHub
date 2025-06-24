def quick_sort(a):
    n = len(a)
    if n <= 1:
        return a
    ca = a[n-1]
    g1 = []
    g2 = []
    for i in range(n-1):
        if a[i] < ca:
            g1.append(a[i])
        else:
            g2.append(a[i])
    return quick_sort(g1) + [ca] + quick_sort(g2)  
d = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(quick_sort(d))