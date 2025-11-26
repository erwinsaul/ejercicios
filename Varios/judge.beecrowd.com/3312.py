import math

def criba():
    v = [1]*100
    primos = []
    for i in range(2, 100):
        if v[i]==1:
            primos.append(i)
            for j in range(2*i, 100, i):
                v[j] = 0
    return primos

primos = criba()

n = int(input())
v = list( map(int, input().split() ) )
for i in v:
    if i in primos:
        print(i,"! = ", math.factorial(i), sep="")