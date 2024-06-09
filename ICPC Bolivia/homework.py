t = int( input() )

r = {}
i = 1
resp = 0
while resp<=50000000:
    resp = ((i+2)*(i+1))//2
    r[resp] = i
    i = i + 1

for _ in range(t):
    n = int( input() )
    if n in r:
        print(r[n])
    else:
        print("No solution")
    