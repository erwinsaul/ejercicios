import sys

def main():
    r = float(input())
    area = round(3.14 * r * r, 3)
    perimetro = round(2*r*3.14,3)
    print(f"{perimetro:.3f} {area:.3f}")

if __name__ == '__main__':
    main()