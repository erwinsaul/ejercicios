# WA 90%
import sys

def main():
    entrada = sys.stdin.read().split()
    if not entrada:
        return
   
    v = [0] * 1000
    v[0] = 1
    v[1] = 1
    v[2] = 2
    for i in range(3, 1000):
        v[i] = v[i-1] + v[i-2]
    for dato in entrada:
        print(v[int(dato)])
    
if __name__ == '__main__':
    main()