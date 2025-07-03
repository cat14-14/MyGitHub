def pp(a):
    for i in range(0, len(a)-1):
        for j in range(i+1, len(a)):
            print(f"{a[i]} - {a[j]}")

name = ["Tom", "Jerry", "Mike"]
pp(name)
print()

name2 = ["Tom", "Jerry", "Mike", "John"]
pp(name2)