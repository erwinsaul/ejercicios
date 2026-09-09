import sys

def main():
    a, b, c, d = map(int, input().split())
    a,b = min(a, b), max(a, b)
    c,d = min(c, d), max(c, d)
    if a<=c<=b or a<=d<=b:
        print("YES")
    elif c<=a<=d or c<=b<=d:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    main()