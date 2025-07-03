a= input().split()
for i in range(0, len(a)-1):
        for j in range(i+1, len(a)):
            print(f"{a[i]} - {a[j]}")
