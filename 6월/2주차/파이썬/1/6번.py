mg = int(input())
mm = mg
dy = int(input())
ch = list(map(int, input().split()))


for i in ch:
    mg = mg * (100+i)/100

if(mg == mm):
    print("본전") 
elif(mg > mm):
    print("인생역전")
elif(mg < mm):
    print("인생역전실패")
