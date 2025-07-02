def qs(a):
    if len(a) <= 1:
        return a
    pivot = len(a)-1
    max = []
    min = []
    for i in a:
        if i < a[pivot]:
            min.append(i)
        elif i > a[pivot]:
            max.append(i)
    return qs(min) + [a[pivot]] + qs(max)

d = [5,2,9,1,5,6,0,7,3,6]
print(qs(d))