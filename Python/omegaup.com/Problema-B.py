def main():
    n = int(input())
    for _ in range(n):
        s = input()
        t = len(s)
        v = [0] * t
        for i in range(t):            
            if s[i]=='B':
                if i-1>=0 and s[i-1]=='W':
                    v[i-1] = 1
                if i+1<t and s[i+1]=='W':
                    v[i+1] = 1
                if i-2>=0 and s[i-2]=='W':
                    v[i-2] = 1
                if i+2<t and s[i+2]=='W':
                    v[i+2] = 1
        print(sum(v))

if __name__ == "__main__":
    main()