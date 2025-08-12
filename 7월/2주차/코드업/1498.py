n, g = map(int, input().split())
arr = list(map(int, input().split()))
result = [min(arr[i:i+g]) for i in range(0, n, g)]
print(*result)
