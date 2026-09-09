import sys

def main():
    a, b, c = map(int, input().split())
    menor = min(a, b, c)
    mayor = max(a, b, c)
    print(f"{menor} {mayor}")

if __name__ == '__main__':
    main()