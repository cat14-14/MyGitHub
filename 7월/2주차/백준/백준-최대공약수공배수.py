a,b = map(int, input().split())
m = 0

if a >= b:
    s1 = [1,1]
    s2 = [1,1]
    for i in range(2,a):
        if a % i == 0 and b % i == 0:
            m = i
    for i in range(2, a):
        if a/2>=0:
            s1[0] *= 2
        elif a/3>=0:
            s1[1] *= 3
    for i in range(2, b):
        if b/2>=0:
            s2[0] *= 2
        elif b/3>=0:
            s2[1] *=  3
elif a <= b:
    s1 = [1,1]
    s2 = [1,1]
    for i in range(2,b):
        if a % i == 0 and b % i == 0:
            m = i
    for i in range(2, a):
        if a/2>=0:
            s1[0] *= 2
        elif a/3>=0:
            s1[1] *= 3
    for i in range(2, b):
        if b/2>=0:
            s2[0] *= 2
        elif b/3>=0:
            s2[1] *=  3
print(m)
print(s1[0] * s1[1] * s2[0] * s2[1])