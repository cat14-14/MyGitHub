def search_list(a, x):
    n = len(a)
    for i in range(0, n):
        if(x == a[i]):
            return i    
    return -1

v = [17, 92, 18, 33, 58, 7, 33, 42]
print(search_list(v, 18))   # 2(순서상 세 번째지만, 위치 번호는 2)
print(search_list(v, 33))   # 3(33은 리스트에 두 번 나오지만 처음 나온 위치만 출력)
print(search_list(v, 900))  # -1(900은 리스트에 없음)