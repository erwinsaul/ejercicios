import sys
from collections import deque

def main():
    n = int(input())
    gr = { i : [] for i in range(0,n) }
    for i in range(n):
        lista = list(map(int, input().split()))
        amigos = lista[0]
        lista = lista[1:]
        for item in lista:
            gr[i].append(item)
    
    k = int(input())

    dias = [-1] * n
    cantidad = [0] * (n+1)

    q = deque()
    q.append(k)
    dias[k] = 0

    while q:
        u = q.popleft()

        for v in gr[u]:
            if dias[v] == -1:
                dias[v] = dias[u] + 1
                cantidad[ dias[v] ] +=1
                q.append(v)
    
    print(max(cantidad))

if __name__ == '__main__':
    main()