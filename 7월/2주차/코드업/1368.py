h, k, d = input().split()
for i in range(int(h)):
        if d == "L":
            print(" " * i, end="")
            print("*" * (int(k)))
        elif d == "R":
            print(" " * (int(h) - i - 1), end="")
            print("*" * (int(k)))