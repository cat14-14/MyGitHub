n = input().split()
while True:
    m = len(n)
    if m <= 1:
        print(n)
        break
    mid = m//2
    g1 = n[:mid]
    g2 = n[mid:]
    result = []
    while g1 and g2:
        if g1[0] < g2[0]:
            result.append(g1.pop(0))
        else:
            result.append(g2.pop(0))
    while g1:
        result.append(g1.pop(0))
    while g2:
        result.append(g2.pop(0))
    