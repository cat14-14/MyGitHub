def ptp(a):
    for i in range(0, len(a)-1):
        for j in range(i+1, len(a)):
            print(f"{a[i]} - {a[j]}")
            
name = ["Tom", "Jerry", "Mike"]
ptp(name)
print()  # 줄 구분

name2 = ["Tom", "Jerry", "Mike", "John"]
ptp(name2)