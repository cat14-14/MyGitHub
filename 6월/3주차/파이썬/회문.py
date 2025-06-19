def palindrome(s):
    c = [i.lower() for i in s if i.isalpha()]
    st = [i.lower() for i in s if i.isalpha()]
    for i in c:
        if c.pop(0) != st.pop():
            return 'False'
    return 'True'


print(palindrome("Wow"))
print(palindrome("Madam, I’m Adam."))
print(palindrome("Madam, I am Adam."))