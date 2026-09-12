# TLE

import sys

def calcular(i, j, u, v):
    inicio = max(i, u)
    fin = min(j, v)

    if inicio > fin:
        return 0

    val_inicio = inicio - i + 1
    val_fin = fin - i + 1

    cant = fin - inicio + 1
    suma = (cant * (val_inicio + val_fin)) // 2

    return suma

def main():
    data = sys.stdin.read().split()

    n = int(data[0])
    a = int(data[1])
    p = int(data[2])

    i = 3
    cambios = []

    for _ in range(a):
        ini = int(data[i])
        fin = int(data[i+1])
        i = i + 2
        cambios.append((ini, fin))
    
    for _ in range(p):
        u = int(data[i])
        v = int(data[i+1])
        i = i + 2
        total_pregunta = 0
        for ini, fin in cambios:
            total_pregunta += calcular(ini, fin, u, v)
        
        print(total_pregunta % 10000)

if __name__ == '__main__':
    main()

