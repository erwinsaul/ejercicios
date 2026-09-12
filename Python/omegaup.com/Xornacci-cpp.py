# MLE
import sys

def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    idx = 1
    for _ in range(t):
        a = int(data[idx])
        b = int(data[idx+1])
        n = int(data[idx+2])
        idx = idx + 3

        if n % 3 == 0:
            print(a)
        elif n%3 == 1:
            print(b)
        else:
            print(a^b)
        
if __name__ == '__main__':
    main()


