def adm(a):
    id = input('아이디를 입력하세요 : ')
    mi = int(input('마일리지를 입력하세요 : '))
    a[id] = mi
    print(f"{id}님을 회원으로 등록하였고 마일리지 {mi}점이 적립되었습니다.\n")
def chm(a):
    id = input('아이디를 입력하세요 : ')
    mi = int(input('마일리지를 입력하세요 : '))
    a[id] = mi
    print(f"{id}님을 마일리지 {mi}점으로 변경했습니다.")
def pod(a):
    id = input("아이디를 입력하세요 : ")
    mi = int(input("마일리지를 입력하세요 : "))
    a[id] += mi
    print(f"{id}님의 마일리지 {mi}점이 추가되었습니다.")
def md(a):
    id = input()
    del a[id]
    print(f"{id}님 회원이 삭제되었습니다.")
def end(a):
    for i in a:
        print(f"아이디 : {i:<10} 마일리지 : {a[i]}")
    return 0
d = {"kim99":12000, "lee66":11000, "han55":3000, "hong77":5000, "hwang33":18000}
while True:
    n = int(input("1:회원추가 2:포인트변경 3:포인트추가 4:회원삭제 0:종료 "))
    if n == 1:
        adm(d)
    elif n == 2:
        chm(d)
    elif n == 3:
        pod(d)
    elif n == 4:
        md(d)
    elif n == 0:
        end(d)
        break