a = []
result = []
n = int(input())

for i in range(n):
    c = int(input())
    a.append(c)

mid = n // 2
g1 = a[:mid]
g2 = a[mid:]

# 먼저 각 부분을 정렬
g1.sort()
g2.sort()

# 병합
while g1 and g2:
    if g1[0] < g2[0]:
        result.append(g1.pop(0))
    else:
        result.append(g2.pop(0))

result += g1
result += g2

for i in range(n):
    print(result[i])
