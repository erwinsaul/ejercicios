import sys

def main():
    x, y = input().split()
    x = int(x)
    y = float(y)

    r = 0
    if x>50:
        r = r + (x-50)*2*y
        x = 50
    
    if x>40:
        r = r + (x-40)*1.5*y
        x = 40
    
    r = r + y*x

    if r.is_integer():
        r = int(r)
    
    print(r)

if __name__ == '__main__':
    main()