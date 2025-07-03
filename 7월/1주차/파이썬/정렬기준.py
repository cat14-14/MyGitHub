n = int(input())
students = []

for i in range(1, n+1):
    math, info = map(int, input().split())
    students.append( (i, math, info) )

# 다중 기준 정렬 (lambda 사용)
students.sort(key=lambda x: (-x[1], -x[2], x[0]))

# 출력
for s in students:
    print(s[0], s[1], s[2])