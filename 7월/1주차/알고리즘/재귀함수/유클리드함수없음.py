a,b = map(int, input().split())
while True:
    if b == 0:
        print(a)
        break
    a,b = b,a%b
