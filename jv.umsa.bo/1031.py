#accepted
from sys import stdin

for line in stdin:
    n = int(line)
    vk = input().split();
    v = []
    for x in vk:
        v.append(int(x))
    v.sort()
    ind = int(n/2)
    me = v[ind]
    men=[]
    may=[]
    ig=[]
    for x in v:
        if x<me:
            men.append(x)
        if x>me:
            may.append(x)
        if x==me:
            ig.append(x);
    if len(men)==len(may) and len(ig)==1:
        print(me)
    else:
        print('-1')