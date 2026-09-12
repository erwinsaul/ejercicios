# MLE
import sys

data = sys.stdin.read().split()
p = int(data[0])
q = int(data[1])

LIMIT = 1000001
phi = list(range(LIMIT))

for i in range(2, LIMIT):
    if phi[i] == i:
        for j in range(i, LIMIT, i):
            phi[j] = phi[j] - phi[j] // i


max_m = max_m - 1
best_n = best_n - 1

for k in range(p, q + 1):
    if phi[k] > max_m:
        max_m = phi[k]
        best_n = k

print(f"{max_m}")
