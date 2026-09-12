# MLE
import sys

MOD = 987654321

def multiplicar(a, b):

    c = [[0, 0], [0, 0]]

    for i in range(2):
        for j in range(2):
            for k in range(2):
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD
    
    return c

def power(m, p):
    result = [[1, 0], [0, 1]]

    base = m
    while p > 0:
        if p % 2 == 1:
            result = multiplicar(result, base)
        base = multiplicar(base, base)
        p = p // 2
    
    return result

def fibonacci(n):

    if n == 0:
        return 0
    
    if n == 1:
        return 1
    
    t = [[1,1],[1,0]]
    t_power = power(T, i)

    return t_power[0][0]

def main():
    n = int(sys.stdin.read())
    print(fibonacci(n))

if __name__ == '__main__':
    main()
        