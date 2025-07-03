def bubble(a):
    print(a)
    while True:
        change = False
        for i in range(len(a) - 1):
            if a[i] > a[i + 1]:
                a[i], a[i + 1] = a[i + 1], a[i]
                print(a)          
                change = True
        if change == False:
            break
    return a

d = [2, 4, 5, 1, 3]
bubble(d)
