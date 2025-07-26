n = int(input())
k = list(map(int, input().split()))

for i in range(n):
    a = k[i]
    print(f"{i+1}:", end=" ")
    for j in range(i+1, n+i):
        b = k[(j) % n]
        if(j!=i):
            if a > b:
                print(">", end=" ")
            elif a < b:
                print("<", end=" ")
            else:
                print("=", end=" ")
    print()
