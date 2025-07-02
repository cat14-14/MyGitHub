def ss(a):
    for i in range(0, len(a)-1):
        m = i
        for j in range(i+1, len(a)):
            if a[j] < a[m]:
                m = j
        a[i],a[m] = a[m],a[i]

d = [2, 4, 5, 1, 3]
ss(d)
print(d)