def sumq(a):
    sum = 0
    for i in range(1, a+1):
        sum += i*i
    return sum

print(sumq(10))
print(sumq(100))  