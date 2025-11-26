while True:
    n = int(input())
    if n==0:
        break
    v = []
    for i in range(1,n+1):
        v.append(i)
    s = "Discarded cards: "
    f = False
    while(len(v) > 1):
        if f:
            s = s + ", "
        f = True
        s = s + ( str(v.pop(0)) )
        v.append( v.pop(0) ) 
    print(s)
    print("Remaining card: " + str(v[0]))
