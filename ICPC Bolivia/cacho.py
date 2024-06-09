t = int( input() )
for _ in range(t):
    v = list( map(int, input().split() ) )
    f = True
    for i in range(1, 5):
        if v[i]!=v[i-1]+1:
            f = False
            break
    if f:
        print("Y")
    else:
        print("N")
    