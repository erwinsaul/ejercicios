n = int(input())
v = list(map(int, input().split()))[:n]
pivote = int(input())

izquierda = []
derecha = []
for i in range(n):
    if v[i] < pivote:
        izquierda.append(v[i])
    
    if v[i] > pivote:
        derecha.append(v[i])

print(*izquierda)
print(*derecha)