def print_all_friends(g, start):
    q = [start]
    s = set(start)
    while q:
        a = q.pop(0)
        print(a)
        for i in g[a]: 
            if i not in s:
                s.add(i)
                q.append(i)
    return s
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

print_all_friends(fr_info, 'Summer')
print()
print_all_friends(fr_info, 'Jerry')