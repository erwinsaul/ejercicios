import sys

def main():
    t = int(input())
    v = []
    for _ in range(t):
        n , m = map(int, input().split())
        v.append((n,m))
    
    t_max = 180
    r = 0
    for mask in range(1<<t):
        actual = 0
        puntos_actual = 0

        for i in range(t):
            if (mask & (1<<i)) !=0:
                actual += v[i][0]
                puntos_actual += v[i][1]
        
        if actual <= t_max:
            r = max(r, puntos_actual)
    print(r)


if __name__ == '__main__':
    main()