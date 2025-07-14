def pf(l, start):
    c = []
    s = set()
    c.append(start)
    s.add(start)
    while c:
        a = c.pop(0)
        print(a)
        for i in l[a]:
            if i not in s:
                c.append(i)
                s.add(i)

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