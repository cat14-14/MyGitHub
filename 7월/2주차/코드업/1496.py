n = int(input())
arr = list(map(int, input().split()))
result = []

for i in range(0, n, 2):
    result.append(min(arr[i], arr[i+1]))

print(*result)
