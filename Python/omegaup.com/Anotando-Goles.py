import sys
import bisect
def main():
    datos = map(int, sys.stdin.read().split())
    m = next(datos)
    n = next(datos)
    lista = list(datos)
    p = bisect.bisect_right(lista, m)
    print(lista[-1]-m, n-p)


if __name__ == "__main__":
    main()