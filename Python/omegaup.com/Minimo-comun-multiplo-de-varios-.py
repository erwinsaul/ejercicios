import sys
import math

def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    lista = list(map(int, data[1:]))

    r = math.lcm(*lista)
    print(r)


if __name__ == '__main__':
    main()