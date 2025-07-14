n,m = map(int, input().split())
age = 0
if m == 1:
    age = (2012) - (1900+n//10000-1)
elif m == 2:
    age = (2012) - (1900+n//10000-1)
elif m == 3:
    age = (2012) - (2000+n//10000-1)
elif m == 4:
    age = (2012) - (2000+n//10000-1)
print(age)