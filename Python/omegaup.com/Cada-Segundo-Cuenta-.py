h1, m1, s1 = map(int, input().split(":"))
h2, m2, s2 = map(int, input().split(":"))

s = s2 - s1
m = m2 - m1
h = h2 - h1

if s < 0:
    s = 60 + s
    m = m - 1

if m < 0:
    m = 60 + m
    h = h - 1

if h < 0:
    h = 24 + h

total = h * 3600 + m * 60 + s
print(total)

