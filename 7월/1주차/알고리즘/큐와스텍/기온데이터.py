def m(a):
    mi = 100
    for i in a:
        if a[i] < mi:
            mi = a[i]
    return mi
def up(a, b):
    result = []
    for i in a:
        if a[i] >= b:
            result.append(i)
    return result
def avg(a):
    sum = 0
    for i in a:
        sum += a[i]
    return sum/len(a)

temperature = {'월':25.5,'화':28.3,'수':33.2,'목':32.1,'금':30.5,'토':33.3,'일':29.3}
print("주간 최고 기온 :", temperature)
print("가장 낮은 최고 기온 :", m(temperature))
print("기온이 30도 이상인 요일 :", up(temperature, 30))
print("최고 기온의 일주일 평균 : {:.1f}".format(avg(temperature)))