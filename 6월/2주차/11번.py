m = [10000 for _ in range(26)]
mx = 10000
for i in range(int(input())):
    a,b,c = input().split()
    c = int(c)
    m[ord(a)-ord('a')] -= c
    m[ord(b)-ord('a')] += c

print(str(chr(ord('a')+m.index(max(m)))) + "가 " + str(max(m))+"원으로 돈이 가장 많다.")