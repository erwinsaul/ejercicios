import sys


def main():
    n = float(input())
    if n<5.0:
        print("SAFE")
    elif n<9.0:
        print("TOXIC")
    else:
        print("VERY TOXIC")

if __name__ == '__main__':
    main()