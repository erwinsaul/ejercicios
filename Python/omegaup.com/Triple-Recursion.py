def main():
    n, m , k = map(int, input().split())
    v = [ [0]*n for i in range(n) ]    
    for i in range(n):
        for j in range(n):
            if i==0 and j==0:
                v[i][j] = m
            elif i==j:
                v[i][j] = v[i-1][j-1] + k
            elif i > j:
                v[i][j] = v[i-1][j]-1
            else:
                v[i][j] = v[i][j-1]-1
    
    for i in range(n):
        print(*v[i])



if __name__ == '__main__':
    main()