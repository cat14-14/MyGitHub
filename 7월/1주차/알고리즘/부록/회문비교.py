def palindrome(s):
    a = 0
    b = len(s)-1
    while a<b:
        if s[a].isalpha()==False:
            a+=1
        elif s[b].isalpha()==False:
            b-=1
        elif s[a].lower() != s[b].lower():
            return False
        else:
            a+=1
            b-=1
    return True
print(palindrome("Wow"))
print(palindrome("Madam, I’m Adam."))
print(palindrome("Madam, I am Adam."))
