l = input().split()
result = []

while l:
    v = l.pop(0)
    id = len(result)
    for i in range(len(result)):
        if v < result[i]:
            id = i
            break
    result.insert(id, v)

print(result)
