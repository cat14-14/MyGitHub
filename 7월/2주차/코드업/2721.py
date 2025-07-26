a = input()
b = input()
c = input()
if(a[len(a)-1] == b[0] and b[len(b)-1] == c[0] and c[len(c)-1] == a[0]):
    print("good")
else:
    print("bad")