import sys

def main():
    a, b, c, d = map(int, input().split())
    if a == c or a==d or b==c or b==d:
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    main()