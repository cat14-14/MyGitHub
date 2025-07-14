n = input().split()
result = []
while n:
    v = n.pop(0)
    ip = False
    for i in range(0, len(result)):
        if result[i] > v:
            ind = i
            ip = True
            break
    if ip == False:
        ind = len(result)
    result.insert(ind, v)

print(result)