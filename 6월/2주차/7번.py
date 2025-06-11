for i in range(10):
    n, m = map(int, input().split())
    if m % n == 0:
        print(n, "의 배수입니다.")
    else:
        print(n, "의 배수가 아닙니다.")