def bs(a, x):
    start = 0
    end = len(a)
    while start <= end:
        mid = (start+end) // 2
        if x == a[mid]:
            return mid
        elif x > a[mid]:
            start = mid + 1
        elif x < a[mid]:
            end = mid - 1
    return -1

d = [1, 4, 9, 16, 25, 36, 49, 64, 81]
print(bs(d, 36))
print(bs(d, 50))