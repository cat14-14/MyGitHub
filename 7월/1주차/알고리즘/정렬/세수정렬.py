a,b,c = map(int, input().split())
if(a<b and b<c):
    print(a, b, c)
elif(a<c and c<b):
    print(a, c, b)
elif(b<a and a<c):
    print(b, a, c)
elif(b<c and c<a):
    print(b, c, a) 
elif(c < a and a < b):
    print(c, a, b)
elif(c < b and b < a):
    print(c, b, a)