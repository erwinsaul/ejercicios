import sys

def main():
    a,b,c = map(int,sys.stdin.readline().split())
    mayor = max(a,b,c)
    menor = min(a,b,c)
    medio = a+b+c-mayor-menor
    print(menor, medio, mayor)
    
if __name__ == '__main__':
    main()