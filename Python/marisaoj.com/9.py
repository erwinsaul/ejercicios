import sys

def main():
    a, b = map(float, input().split())
    r = round(a/b,2)
    print(r)

if __name__ == '__main__':
    main()