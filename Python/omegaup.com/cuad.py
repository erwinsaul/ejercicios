import sys

def main():
    n = int(input())
    m = []
    dp = [ [0]*n for i in range(n) ]
    for _ in range(n):
        v = list(map(int, input().split()))
        m.append(v)
    v = [0] * (n+1)
    for i in range(n):
        for j in range(n):
            if m[i][j] == 0:
                if i==0 or j==0:
                    dp[i][j] = 1
                else:
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
                
                v[ dp[i][j] ] = v[ dp[i][j] ] + 1;

    for i in range(n-1, 0, -1):
        v[i] = v[i] + v[i + 1]

    for i in range(1, n+1):
        print(v[i]) 

    


if __name__ == '__main__':
    main()