a, b = map(int, input().split())
if(a >= b):
    i = b
else:
    i = a
while True:
    if a%i==0 and b%i==0:
        print(i)
        break
    i-=1