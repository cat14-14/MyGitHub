def fibo(n):
    if n == 0 or n == 1:
        return n
    return fibo(n-1) + fibo(n-2)

print(fibo(7))
print(fibo(10))