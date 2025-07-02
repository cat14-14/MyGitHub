n = input().split()
for i in range(0,len(n)-1):
    m = i
    for j in range(i+1,len(n)):
        if n[m] > n[j]:
            m = j
    n[m],n[i] = n[i],n[m]

print(n)