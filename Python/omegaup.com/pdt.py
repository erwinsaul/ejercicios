# https://www.omegaup.com/pdt/

import sys
import math

def sumaPuntos(a,b,c,d):
    x = abs(a - c)
    y = abs(b - d)
    r = math.gcd(x,y)
    return r

def puntosInternos(a,b,c,d,e,f, s):
    Area  = abs(a*(d - f) + c*(f - b) + e*(b - d))
    Area = Area/2
    puntos = Area - s/2 + 1
    return int(puntos)

def main():
    a,b,c,d,e,f, = map(int, sys.stdin.read().split())
    s = sumaPuntos(a,b,c,d) + sumaPuntos(c,d,e,f) + sumaPuntos(a,b,e,f)
    t = puntosInternos(a,b,c,d,e,f, s)
    print(s, t)
    

if __name__ == '__main__':
    main()