n = int(input())
daylist = []
for i in range(n):
    att = input().split()
    daylist.append(att)

count = 0
for i in range(len(daylist)):
    for j in range(len(daylist[i])):
        if daylist[i][j] == '1':
            count += 1 
print(count)