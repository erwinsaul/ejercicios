# https://www.omegaup.com/semiprimos/
# TLE
import sys

def main():
    entrada = sys.stdin.read().strip()
    if not entrada:
        return
    m = int(entrada)
    
    limite = (m.1) // 2    
    lista = [False] * (limite + 1)
    raiz = int(limite ** 0.5)
    
    for i in range(2, raiz + 1):
        if not lista[i]:            
            lista[i*i : limite+1 : i] = [True] * len(range(i*i, limite+1, i))
    
    primos = [i for i in range(2, limite) if not lista[i]]

    ini = 0
    fin = len(primos) - 1
    r = 0
    while ini <= fin:
        if primos[ini] * primos[fin] < m:
            r = r + (fin - ini) + 1
            ini = ini + 1        
        else:
            fin = fin - 1
        
    print(r)

if __name__ == '__main__':
    main()