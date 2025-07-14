def memberadd(a):
    id = input("아이디 : ")
    m = int(input("마일리지 : "))
    a[id] = m
    print(f"{id}님을 회원으로 등록하였고 마일리지 {m}점이 적립되었습니다.\n")
def malter(a):
    id = input("아이디 : ")
    m = int(input("마일리지 : "))
    a[id] = m
    print(f"{id}님을 마일리지 {m}점으로 변경하였습니다.\n")
def minsert(a):
    id = input("아이디 : ")
    m = int(input("마일리지 : "))
    a[id] += m
    print(f"{id}님을 마일리지 {m}점이 추가되었습니다.\n")
def mdel(a):
    id = input("아이디 : ")
    del a[id]
    print(f"{id}님 회원이 삭제되었습니다.\n")
def end(a):
    for i in a:
        print(f"아이디 : {i:<10} 마일리지 : ", a[i])
    return 0

d = {"kim99":12000, "lee66":11000, "han55":3000, "hong77":5000, "hwang33":18000}
while True:
    n = int(input("1:회원추가 2:포인트변경 3:포인트추가 4:회원삭제 0:종료 "))
    if n == 1:
        memberadd(d)
    elif n == 2:
        malter(d)
    elif n == 3:
        minsert(d)
    elif n == 4:
        mdel(d)
    elif n == 0:
        end(d)
        break