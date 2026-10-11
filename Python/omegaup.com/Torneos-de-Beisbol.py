def main():
    n, k = map(int, input().split())
    r = (n*k*(n-1))//2
    print(r)

if __name__ == "__main__":
    main()