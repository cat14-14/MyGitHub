n = list(map(int, input().split()))
result = []
while n:
    m = 0
    for i in range(len(n)):
        if n[i] < n[m]:
            result.append(n.pop(i))
            break
        elif(i == len(n)-1):
            result.append(n.pop(m))
            break
print(result)