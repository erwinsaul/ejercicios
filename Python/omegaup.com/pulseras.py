import sys

def main():
    n = int(input())
    a = 1
    b = 3
    if n == 1:
        print(a)
    elif n == 2:
        print(b)
    else:
        for i in range(n-1):
            a, b = b, (a + b) % 1000000007
        print(a)        

if __name__ == '__main__':
    main()