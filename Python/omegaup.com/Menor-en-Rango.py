import bisect
def main():
    n = int( input() )
    v = list( map(int, input().split()) )
    a, b = map(int, input().split())
    r = min(v[a:b+1])
    p = v.index(r)
    print(p)

if __name__ == "__main__":
    main()