def hanoi(n, fp, tp, ap):
    if n == 1:
        print(fp ,"->", tp)
        return
    hanoi(n-1, fp, ap, tp)
    print(fp, "->", tp)
    hanoi(n-1, ap, tp, fp)

print("n == 2")
hanoi(2, 1, 3, 2)