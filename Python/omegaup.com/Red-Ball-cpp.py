// MLE
n = int(input())

for _ in range(n):
    t = input()
    r = []
    tam = len(t)-1
    for i in t:
        if i != '0':
            r.append(i+'0'*tam)
        tam = tam - 1

    print(len(r))
    print(' '.join(r))
