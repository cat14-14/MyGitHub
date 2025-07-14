def fm(a):
    m = 0
    for i in range(1, len(a)):
        if a[m] > a[i]:
            m = i
    return a[m]

v = [17, 92, 18, 33, 58, 7, 33, 42]
print(fm(v))