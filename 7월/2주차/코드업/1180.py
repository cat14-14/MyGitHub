n = input()
c = []
a, b = n[0], n[1]
c.append(b)
c.append(a)
d = int("".join(c)) * 2
if d >= 100:
    d = d%100
if d<=50:
    print(d)
    print("GOOD")
else:
    print(d)
    print("OH MY GOD")