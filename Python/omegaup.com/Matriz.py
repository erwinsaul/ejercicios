f, c = map(int, input().split())
v = []
for i in range(f):
    fila = input()
    v.append(fila)

v.reverse()

for i in v:
    print(i)