import sys

v = []
for i in sys.stdin:
    v.append(i)

v.reverse()
for i in v:
    print(i)