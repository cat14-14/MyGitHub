import random
n = int(input())
for i in range(1, n+1, 1):
    print("짝" if(i==30 or i%10%3==0) else i, end=" ")

# a if b else c
