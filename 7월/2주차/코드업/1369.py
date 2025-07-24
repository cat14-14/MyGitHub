n, k = map(int, input().split())

for i in range(n):
    for j in range(n):
        # 테두리는 모두 *
        if i == 0 or i == n - 1 or j == 0 or j == n - 1:
            print("*", end="")
        # 내부에서 빗금 조건: (i + j - 2) % k == 0
        elif (i + j - 2) % k == 0:
            print("*", end="")
        else:
            print(" ", end="")
    print()