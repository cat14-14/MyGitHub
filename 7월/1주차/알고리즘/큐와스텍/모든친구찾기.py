def pf(a, s):
    c = []
    se = set()
    c.append(s)
    se.add(s)
    while c:
        b = c.pop(0)
        print(b)
        for i in a[b]:
            if i not in se:
                c.append(i)
                se.add(i)

fr_info = {
    'Summer': ['John', 'Justin', 'Mike'],
    'John': ['Summer', 'Justin'],
    'Justin': ['John', 'Summer', 'Mike', 'May'],
    'Mike': ['Summer', 'Justin'],
    'May': ['Justin', 'Kim'],
    'Kim': ['May'],
    'Tom': ['Jerry'],
    'Jerry': ['Tom']
}

pf(fr_info, 'Summer')
print()
pf(fr_info, 'Jerry')