def f(n):
    sum = 1
    for i in range(1, n+1):
        sum *= i
    return sum

print(f(5))