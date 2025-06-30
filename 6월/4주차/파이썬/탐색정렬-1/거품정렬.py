def bubble_sort(a):
    n = len(a)
    while True:
        change = False
        for i in range(0, n-1):
            print(a)
            if a[i] > a[i+1]:
                a[i], a[i+1] = a[i+1], a[i]
                change = True
                
        if change == False:
            return a

d = [2, 4, 5, 1, 3]
bubble_sort(d)
print(d)