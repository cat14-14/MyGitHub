def merge_sort(a):
    n = len(a)
    if n <= 1:
        return a
    mid = n // 2
    g1 = merge_sort(a[:mid])
    g2 = merge_sort(a[mid:])
    result = []
    
    # g1, g2에서 하나씩 비교하면서 작은 값부터 결과에 추가
    while g1 and g2:
        if g1[0] < g2[0]:
            result.append(g1.pop(0))
        else:
            result.append(g2.pop(0))
    
    # 남은 데이터 붙이기
    while g1:
        result.append(g1.pop(0))
    while g2:
        result.append(g2.pop(0))

    return result

# 테스트
d = [6, 8, 3, 9, 10, 1, 2, 4, 7, 5]
print(merge_sort(d))
