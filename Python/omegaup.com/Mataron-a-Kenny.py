import sys

def main():
    n = int(input())
    v = list(map(int, input().split()))
    v.sort()
    r = n * (v[0]+v[-1])
    print(r)

if __name__ == '__main__':
    main()