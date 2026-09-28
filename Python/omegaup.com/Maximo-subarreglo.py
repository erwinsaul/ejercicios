import sys

def main():
    n = int(input())
    v = list(map(int, input().split()))
    suma_actual = v[0]
    suma_maxima = v[0]
    for i in range(1, n):
        if suma_actual + v[i] < v[i]:
            suma_actual = v[i]
        else:
            suma_actual = suma_actual + v[i]            
        suma_maxima = max(suma_maxima, suma_actual)

    print(suma_maxima)
if __name__ == '__main__':
    main()