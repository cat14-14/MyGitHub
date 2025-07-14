def fi(n, v):
    for i in range(0, len(n)):
        if v < n[i]:
            return i
    return len(n)

def ins(a):
    result = []
    while a:
        v = a.pop(0)
        ind = fi(result, v)
        result.insert(ind, v)
    return result

d = [2, 4, 5, 1, 3]
print(ins(d))  # [1, 2, 3, 4, 5]
