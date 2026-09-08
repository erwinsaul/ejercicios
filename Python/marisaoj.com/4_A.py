import sys

def main():
    a,b,c = map(int, input().split())
    mayor = max(a,b,c)
    menor = min(a,b,c)
    medio = a+b+c - mayor - menor
    if menor+medio > mayor:
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    main()