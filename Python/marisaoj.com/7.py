import sys

def main():
    a,b,c = map(int, input().split())
    lado = min(a, b, c)
    lado2 = max(a, b, c)
    r = (2*lado + 2*lado2)-(a+b+c)
    print(r)

if __name__ == '__main__':
    main()