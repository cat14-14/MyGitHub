n = [0]*8
for i in range(8):
    n[i] = input()
count = 0
for i in range(8):
    for j in range(8):
        if (i + j) % 2 == 0 and n[i][j] == 'F':
            count += 1
print(count)
