import sys
import math

def main():
    a = int(input())
    if a < 0:
        print("0")
    else:
        r = int(math.sqrt(a))
        print(r)

if __name__ == '__main__':
    main()