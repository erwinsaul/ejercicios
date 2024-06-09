#TLE
import math
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    r = 0
    sqrt_n = int(math.sqrt(n))
    for i in range(1, sqrt_n + 1):
        if n % i == 0:
            if i % k != 0:
                r += i
            if i != n // i and (n // i) % k != 0: 
                r += n // i
    print(r)
