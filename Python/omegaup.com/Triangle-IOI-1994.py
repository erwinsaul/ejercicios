import sys

def main():
    n = int(input())
    m = []
    for _ in range(n):
        v = list( map(int, input().split()) )
        m.append(v)    
    for i in range(n-2, -1, -1):
        for j  in range(0, len(m[i]) ):
            m[i][j] = m[i][j] + max(m[i+1][j], m[i+1][j+1])
    
    print(m[0][0])    

if __name__ == '__main__':
    main()