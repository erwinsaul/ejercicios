import sys

def suma(n):
    s = n*(n+1)//2
    return s

def sumaMultiplos(n, c):
    k = n//c
    s = c*k*(k+1)//2
    return s

def solve(n, c):
    s = suma(n)
    t = sumaMultiplos(n, c)
    return s - t

def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())
        a, b = min(a,b), max(a,b)
        r = solve(b, c) - solve(a-1, c)
        print(r)


if __name__ == '__main__':
    main()