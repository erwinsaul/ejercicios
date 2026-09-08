import sys

def main():

    a,b,c,x,y,z = map(int, input().split())
    if c == z:
        if b == y:
            if a < x:
                print("1")
            else:
                print("2")
        else:
            if b < y:
                print("1")
            else:
                print("2")
    else:
        if c < z :
            print("1")
        else:
            print("2")
    

if __name__ == '__main__':
    main()