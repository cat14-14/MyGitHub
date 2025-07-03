def ss(a):
    for i in range(0, len(a)-1):
        max = i
        for j in range(i+1, len(a)):
            if a[max] < a[j]:
                max = j
        a[i], a[max] = a[max], a[i]

d = [2, 4, 5, 1, 3]
ss(d)
print(d)