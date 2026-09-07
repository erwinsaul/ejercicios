import sys

def main():
    a, b = map(int, input().split())
    
    if a == 0 and b == 0:
        print("INFINITE SOLUTIONS")
    elif a == 0 or b%a!=0:
        print("NO SOLUTION")
    else:
        print(-b//a)    
    

if __name__ == '__main__':
    main()