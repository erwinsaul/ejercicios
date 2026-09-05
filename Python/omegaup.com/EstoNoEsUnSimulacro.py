import sys
import bisect
def main():
    primos = []
    p = [0]*10001
    for i in range(2, 10001):
        if p[i] == 0:
            primos.append(i)
            for j in range(i*i, 10001, i):
                p[j] = 1
    ts = 0
    tm = 0
    n = int(input())
    for i in range(n):
        p, n = map(int, input().split())
        c = bisect.bisect_right(primos, n)
        if c>0 and n%c == 0:
            ts = ts + p
            print("SERA SALVADA")
        else:
            print("NO LA SALVEN")
            tm = tm + p
    print(ts)
    print(tm)

if __name__ == '__main__':
    main()