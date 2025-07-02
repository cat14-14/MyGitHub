def sl(a,b):
    for i in range(len(a)):
        if b == a[i]:
            return i
    return -1

d = [1, 2, 3, 4, 5, 2, 3, 1,5]
print(sl(d, 5))