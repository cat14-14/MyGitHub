def fi(r, v):
    for i in range(0, len(r)):
        if(v < r[i]):
            return i
    return len(r)

def i_s(a):
    re = []
    while a:
        v = a.pop(0)
        i = fi(re, v)
        re.insert(i,v)
    return re
        
d = [2, 4, 5, 1, 3]
print(i_s(d))
