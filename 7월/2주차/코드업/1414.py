n = input()
count1=0
count2=0
for i in n:
    if i == 'c' or i == 'C':
        count1+=1
for j in range(len(n)-1):
    if (n[j] =='c' or n[j] == 'C') and (n[j+1] =='c' or n[j+1] == 'C'):
        count2 += 1
print(count1)
print(count2)