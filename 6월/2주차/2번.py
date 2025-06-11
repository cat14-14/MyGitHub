age, w = map(int, input().split())
b = 2025 - age
if(b <= w):
    print(age+(w-2025))
elif(b > w):
    print("그 해에는 아직 태어나지 않았어요!")
