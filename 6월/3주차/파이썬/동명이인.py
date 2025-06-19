def find_same_name(s):
    nd = {}
    result = set()
    for x in s:
        if x in nd:
            nd[x] += 1
        else:
            nd[x] = 1
    for i in nd:
        if nd[i] > 1:
            result.add(i)
    return result

name = ["Tom", "Jerry", "Mike", "Tom"]  # 대소문자 유의: 파이썬은 대소문자를 구분함
print(find_same_name(name))

name2 = ["Tom", "Jerry", "Mike", "Tom", "Mike"]
print(find_same_name(name2))