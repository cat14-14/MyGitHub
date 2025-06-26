def sl(a, x):
    n = len(a)
    for i in range(0, n):
        if(a[i] == x):
            return i
    return -1

v = [17, 92, 18, 33, 58, 7, 33, 42]
print(sl(v, 18))
print(sl(v, 33))
print(sl(v, 900))

#순차탐색 알고즘 : 리스트의 첫번째 자료부터 하나하나 찾아서,
#찾는 값이 리스트에 있다면 그 위치를 반환하고,
#없다면 -1을 반환

