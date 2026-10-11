def main():
    n, k = map(int, input().split())
    r = 0
    for _ in range(n):
        d = int(input())
        r = r + ( 1 if d < k else 0)
    print(r)
if __name__ == "__main__":
    main()