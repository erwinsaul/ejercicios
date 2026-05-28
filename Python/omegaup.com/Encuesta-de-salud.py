t = int(input())
v = []
for _ in range(t):
    id = int(input())
    nombre = input()
    peso = int(input())
    altura = float(input())
    d = {
        'id': id,
        'nombre': nombre,
        'peso': peso,
        'altura': altura
    }

    v.append(d)

v.reverse()

for item in v:
    imc = item['peso'] / (item['altura'] * item['altura'])
    print(item['id'], item['nombre'], round(imc, 1))



