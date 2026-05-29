n, m = map(int, input().split())
gr = []
for i in range(n):
    gr.append([0]*n)

for i in range(m):
    origen, destino = map(int, input().split())
    gr[origen][destino] = 1
    gr[destino][origen] = 1

for i in range(n):
    for j in range(n):
        print(gr[i][j], end=' ')
    print()
