n = int(input())
age = 2012 - n + 1
if age >= 1900 and age<2000:
    print(age%100, "1")
elif age >= 2000:
    print(age%100, "3")