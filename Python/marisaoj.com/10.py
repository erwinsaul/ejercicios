import sys
import math 

def main():
    x1,y1,x2,y2 = map(int,sys.stdin.readline().split())
    x = x2 -x1
    y = y2 -y1
    d = math.sqrt(x**2 + y**2)
    print(f"{d:.2f}")

if __name__ == '__main__':
    main()