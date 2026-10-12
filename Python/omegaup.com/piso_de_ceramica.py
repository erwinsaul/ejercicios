def main():
    n = int(input())
    osc = 2*n+3*(n-2) + n-3
    bl = n*n - osc
    print(bl, osc)

if __name__ == "__main__":
    main()