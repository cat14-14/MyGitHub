s = input().split()
a = 0
b = len(s)-1
while a<b:
    if s[a].isalpha()==False:
        a+=1
    elif s[b].isalpha()==False:
        b-=1
    elif s[a].lower() != s[b].lower():
        print("False")
        break
    else:
        a+=1
        b-=1
print("True")