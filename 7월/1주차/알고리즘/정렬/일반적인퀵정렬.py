def quick_sort_sub(a, s, e):
    if s >= e:
        return
    
    pivot = a[e]
    i = s
    for j in range(s, e):
        if a[j] < pivot:
            a[i], a[j] = a[j], a[i]
            i += 1
    a[i], a[e] = a[e], a[i]
    
    quick_sort_sub(a, s, i - 1)
    quick_sort_sub(a, i + 1, e)

def quick_sort(a):
    quick_sort_sub(a, 0, len(a) - 1)
    return a

d = [6, 8, 3, 9, 10, 1, 2, 4, 7, 5]
print(quick_sort(d))  # [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
