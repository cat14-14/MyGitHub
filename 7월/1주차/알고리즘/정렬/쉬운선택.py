def fm(a):
    m = 0
    for i in range(1,len(a)):
        if a[i] < a[m]:
            return i
    return m

def ss(a):
    result = []
    while a:
        m = fm(a)
        result.append(a.pop(m))
    return result

d = [2, 4, 5, 1, 3]
print(ss(d))