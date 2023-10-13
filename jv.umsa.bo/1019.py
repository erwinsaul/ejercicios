#Accepted
n = int(input())

for i in range(n):
    nk = input().split()
    v = []
    for x in nk:
      v.append(int(x))
      
    v.sort();
    print("Case {}: {}".format(i+1, v[1]))