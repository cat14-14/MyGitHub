def sumn(a):
    if a == 1:
        return 1
    else:
        return a + sumn(a-1)
    
print(sumn(10))
print(sumn(100))