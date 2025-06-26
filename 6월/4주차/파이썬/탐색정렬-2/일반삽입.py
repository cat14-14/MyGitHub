def i_s(a):
    n = len(a)
    for i in range(1, n):
        k = a[i]
        j = i-1
        while j>=0 and k < a[j]:
            a[j + 1] = a[j]
            j -= 1
        a[j + 1] = k

d = [2, 4, 5, 1, 3]
i_s(d)
print(d)