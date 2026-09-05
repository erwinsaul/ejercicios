# https://www.omegaup.com/funcion-totienica-de-euler/
# TLE

import sys
from array import array

def main():
    data = sys.stdin.buffer.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    N = 1000001
    v = array('i', range(N))
    v[1] = 0
    for i in range(2, 1000001):
        if v[i] == i:
            for j in range(i, 1000001, i):
                v[j] = v[j] - v[j]//i

    ans = ans('i',[0])*N
    ans[1] = 1
    for i in range(2, 1000001):
        if v[i] > v[ans[i-1]]:
            ans[i] = i
        else:
            ans[i] = ans[i-1]

    for _ in range(t):
        n = int(data[idx]); idx += 1
        print(ans[n])
        

if __name__ == '__main__':
    main()