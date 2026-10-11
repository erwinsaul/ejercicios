def main():
    n = int(input())
    m = []
    for i in range(n):
        lista = list( map(int, input().split()) )
        m.append(lista)
    
    for i in range(n-2, -1, -1):
        for j in range(i+1):
            m[i][j] = m[i][j] + max(m[i+1][j], m[i+1][j+1])  

    print(m[0][0])
if __name__ == '__main__':
    main()