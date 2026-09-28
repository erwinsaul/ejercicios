import sys

def main():
    n = int(input())
    m = int(input())
    s = [ 0 ] * n
    d = [ 0 ] * m
    for i in range(n):
        s[i] = int(input())
    
    for i in range(m):
        d[i] = int(input())
    
    r = {}

    for i in range(n):
        idx = m-1
        while idx>=0 and s[i]>0:
            t = s[i] // d[idx]
            if t > 0:
                if d[idx] in r:
                    r[ d[idx] ] += t
                else:
                    r[ d[idx] ] = t
            
            s[i] = s[i] % d[idx]
            idx = idx - 1
    
    for i in range(m-1, -1, -1):
        if d[i] in r and r[ d[i] ] > 0:
            print(r[ d[i] ], d[i])

if __name__ == '__main__':
    main()