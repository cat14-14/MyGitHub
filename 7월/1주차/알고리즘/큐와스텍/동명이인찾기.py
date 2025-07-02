def fn(s):
    nd = {}
    result = set()
    for x in s:
        if x in nd:
            nd[x] += 1
        else:
            nd[x] = 1
    for x in nd:
        if nd[x] > 1:
            result.add(x)
    return result


name = ["Tom", "Jerry", "Mike", "Tom"]  # 대소문자 유의: 파이썬은 대소문자를 구분함
print(fn(name))

name2 = ["Tom", "Jerry", "Mike", "Tom", "Mike"]
print(fn(name2))