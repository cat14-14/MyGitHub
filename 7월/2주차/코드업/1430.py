import sys

n = int(sys.stdin.readline())
N = list(map(int, sys.stdin.readline().split()))

m = int(sys.stdin.readline())
M = list(map(int, sys.stdin.readline().split()))

check = set(N)

for num in M:
    if num in check:
        print(1, end=' ')
    else:
        print(0, end=' ')
