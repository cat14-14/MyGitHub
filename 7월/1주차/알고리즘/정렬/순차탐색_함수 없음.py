n = input().split()
m = input("찾을 수를 입력하세요 : ")
s=0
for i in range(len(n)):
    if m == n[i]:
        print(i,"번째 인덱스에 있습니다.")
        break
    else:
        s+=1
if(s!=0):
    print(m,"을 찾지 못했습니다.")