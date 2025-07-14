id = "admin"
pw = "1234"
p1, p2 = map(str, input().split())
l = ["#", "'", '"', "\\", "(", ")", "%"]
a = p1+p2
b = 0
for i in l:
     b += a.count(i)
if(p1 == id and p2 == pw):
    print("환영합니다.")
elif(b > 0):
    print("잘못된 입력값 입니다.")
elif(p1 == id and p2 != pw):
    print("비번가 다릅니다.")
elif(p1 != id and p2 == pw):
    print("아이디이 다릅니다.")
else:
    print("잘못된입력입니다.")
