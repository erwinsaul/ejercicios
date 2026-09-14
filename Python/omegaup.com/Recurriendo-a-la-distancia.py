import sys

def main():
    mascara = 0xFFFFFFFF
    n = int(sys.stdin.read())
    r = 1    
    for i in range(1, n+1):
        r = (1 + i*r) & mascara
    
    print(r)

if __name__ == '__main__':
    main()