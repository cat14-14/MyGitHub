def pd(a):
    c = []
    s = []
    for x in a:
        if x.isalpha():
            c.append(x.lower())
            s.append(x.lower())
    while c:
        if c.pop(0) != s.pop():
            return 'False'
    return 'True'

print(pd("Wow"))
print(pd("Madam, I’m Adam."))
print(pd("Madam, I am Adam."))