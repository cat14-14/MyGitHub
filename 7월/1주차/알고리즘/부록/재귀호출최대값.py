def fm(a, b):
    if b == 1:
        return a[0]
    max = fm(a,b-1)
    if max > a[b-1]:
        return max
    else:
        return a[b-1]
    
v = [17, 92, 18, 33, 58, 7, 33, 42]
print(fm(v, len(v)))