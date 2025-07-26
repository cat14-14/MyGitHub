def is_palindrome(s):
    return s == s[::-1]

def reverse_number(n):
    return int(str(n)[::-1])

n = int(input())
reversed_n = reverse_number(n)
total = n + reversed_n

if is_palindrome(str(total)):
    print("YES")
else:
    print("NO")
