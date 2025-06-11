import random
num = random.randint(1, 7)
num2 = random.randint(1,7)
a = num + num2
n = input()
if(n=="짝"):
    if(a%2==0):
        print("예측이 맞았습니다.")
    else:
        print("에측이 틀렸습니다")
elif(n=="홀"):
    if(a%2!=0):
        print("예측이 맞았습니다.")
    else:
        print("에측이 틀렸습니다")
else:
    print("잘못된 입력입니다.")