def sumq(a):
    sum = 0
    sum = a*(a+1)*(2*a+1)/6
    return int(sum)

print(sumq(10))
print(sumq(100))