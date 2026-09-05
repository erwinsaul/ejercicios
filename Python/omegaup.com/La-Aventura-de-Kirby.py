n, k = map(int, input().split())

v = list(map(int, input().split()))

if k in v:
    print(v.index(k))
else:
    print("Poyo :(")