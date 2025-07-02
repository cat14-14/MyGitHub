n = int(input())
fp, tp, ap = 1, 3, 2
print("n ==", n)

stack = [(n, fp, tp, ap)]

while stack:
    n, fp, tp, ap = stack.pop()
    if n == 1:
        print(fp, "->", tp)
    else:
        stack.append((n - 1, ap, tp, fp))
        stack.append((1, fp, tp, ap))
        stack.append((n - 1, fp, ap, tp))
