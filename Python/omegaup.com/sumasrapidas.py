import sys

def main():
    entrada = sys.stdin.read().split()
    if not entrada:
        return
    s = entrada[-1]
    n = "".join(entrada[:-1])
    mem = {}
    def encontrar_min_piezas(indice, suma_restante):
        if indice == len(n):
            if suma_restante == 0:
                return 0
            else:
                return float('inf')
        
        estado = (indice, suma_restante)
        if estado in mem:
            return mem[estado]
        
        min_piezas = float('inf')

        for longitud in range(1, 4):
            if (indice + longitud) <= len(n):
                fragmento = n[indice : indice + longitud]
                valor = int(fragmento)

                if valor <= suma_restante:
                    piezas_resto = encontrar_min_piezas(indice + longitud, suma_restante - valor)

                    if piezas_resto != float('inf'):
                        min_piezas = min(min_piezas, piezas_resto + 1)
        
        mem[estado] = min_piezas
        return min_piezas
    
    r = encontrar_min_piezas(0, int(s))
    if r == float('inf'):
        print("-1")
    else:
        print(r - 1)


if __name__ == '__main__':
    main()