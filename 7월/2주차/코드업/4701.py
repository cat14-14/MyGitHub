n = int(input())
arr = list(map(int, input().split()))
arr.sort()

left, right = 0, n - 1
best_sum = float('inf')
ans = (0, 0)

while left < right:
    s = arr[left] + arr[right]
    if abs(s) < abs(best_sum):
        best_sum = s
        ans = (arr[left], arr[right])
    if s < 0:
        left += 1
    elif s > 0:
        right -= 1
    else:
        break

print(ans[0], ans[1])
