# 삽입 정렬
# 입력: 리스트 a
# 출력: 없음(입력으로 주어진 a가 정렬됨)
# 1번을 해보세요!
def ins_sort(a):
    n = len(a)
    for i in range(1,n):
        key = a[i]
        j = i-1
        while j>= 0 and a[j] > key:
            a[j + 1] = a[j]
            j -= 1
        a[j+1] = key

d = [2, 4, 5, 1, 3]
ins_sort(d)
print(d)
