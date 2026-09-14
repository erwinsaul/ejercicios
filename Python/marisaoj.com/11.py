import sys
import math

def main():
    n = int(input())
    r = int(math.sqrt(n))
    if r*r == n:
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    main()