def quick_sort_sub(a, s, e):
    if e - s <= 0:
        return a
    
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
#[6, 8, 3, 9, 10, 1, 2, 4, 7, 5] i = 0
#[3, 8, 6, 9, 10, 1, 2, 4, 7, 5] i = 1
#[3, 1, 6, 9, 10, 8, 2, 4, 7, 5] i = 2
#[3, 1, 2, 9, 10, 8, 6, 4, 7, 5] i = 3
#[3, 1, 2, 4, 10, 8, 6, 9, 7, 5] i = 4

#[3, 1, 2, 4, 5, 8, 6, 9, 7, 10] i = 4

#0~3, 
#[3, 1, 2, 4] i = 0, j = 0
#[3, 1, 2, 4] i = 1, j = 1
#[3, 1, 2, 4] i = 2, j = 2
#[3, 1, 2, 4] i = 3, j = 3

#5~9,
#[8, 6, 9, 7, 10]


print(quick_sort(d))
