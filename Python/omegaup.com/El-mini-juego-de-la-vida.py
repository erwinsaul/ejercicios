c, n = map(int, input().split())

if n>8 or n<0:
    print("ERROR")
else:
    if c==0:
        if n==3:
            print("1")
        else:
            print("0")
    else:
        if n<2 or n>3:
            print("0")
        else:
            print("1")
