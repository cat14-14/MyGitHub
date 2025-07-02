n = {input().split}
m = input("찾는 사람을 입력하세요")
c = []
s = set()
c.append(m)
s.add(m)
while c:
    a = c.pop(0)
    print(a)
    for i in n[a]:
        if i not in s:
            s.add(i)
            c.append(i)
