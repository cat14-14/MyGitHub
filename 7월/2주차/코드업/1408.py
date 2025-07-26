s = input()
for c in s:
    print(chr(ord(c) + 2), end="")
print()
for c in s:
    print(chr((ord(c) * 7) % 80 + 48), end="")