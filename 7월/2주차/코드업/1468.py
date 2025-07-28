n = int(input())
a = 1

for i in range(n):
    if i % 2 == 0:
        temp = []
        for j in range(n):
            temp.append(a)
            a += 1
        for j in reversed(temp):
            print(j, end=" ")
    else:
        temp = []
        for j in range(n):
            temp.append(a)
            a += 1
        for j in temp:
            print(j, end=" ")
    print()
