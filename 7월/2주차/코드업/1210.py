n = list(map(int, input().split()))  # 리스트로 변환
sum = 0
for i in range(0, 2):
    if n[i] == 1:
        sum += 400
    elif n[i] == 2:
        sum += 320
    elif n[i] == 3:
        sum += 120
    elif n[i] == 4:
        sum += 100
    elif n[i] == 5:
        sum += 70

if sum > 500:
    print("angry")
elif sum <= 500:
    print("no angry")
