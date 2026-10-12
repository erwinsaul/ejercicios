import sys
def main():
    datos = sys.stdin.read().split()
    n = int(datos[0])
    k = int(datos[1])
    if k==1:
        r = n*n
        print(r)
    elif k==3:
        r = (n*(1+n))//2
        print(r)
    else:
        m = (n+1)//2
        r = m*m
        print(r)

if __name__ == "__main__":
    main()