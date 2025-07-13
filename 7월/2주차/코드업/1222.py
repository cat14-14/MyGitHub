t, a, b = map(int, input().split())

for i in range(t, 90, 5):
    a += 1

if(a > b):
    print("win")
elif(a < b):
    print("lose")
else:
    print("same")
