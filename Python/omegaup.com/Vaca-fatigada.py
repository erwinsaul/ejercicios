import sys

def main():
    datos = sys.stdin.read().split()

    if datos:
        n = int(datos[0])
        m = int(datos[1])
        d = [ int(x) for x in datos[2:]]    
        
        dp = []
        for i in range(n+1):
            dp.append([-1] * (m+1)) 
    
        dp[0][0] = 0
        for i in range(n):
            for j in range(m+1):
                if dp[i][j] != -1:
                    if j<m:
                        dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + d[i] )
                    if j==0:
                        dp[ i+1 ][0] = max(dp[i+1][0], dp[i][j])
                    elif j>0:
                        if i+j<=n:
                            dp[i+j][0] = max(dp[i+j][0],dp[i][j])

        print(dp[n][0])


if __name__ == '__main__':
    main()