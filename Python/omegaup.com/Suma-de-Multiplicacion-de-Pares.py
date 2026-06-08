n = int(input())
v = list(map(int, input().split()))

r = 0
for i in range(n):
    for j in range(i + 1, n):
        r += v[i] * v[j]

print(r)