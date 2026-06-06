import sys
total = 0
for line in sys.stdin:    
    #total = total + line.count('o')
    for c in line:
        #total = total + (1 if c == 'o' else 0)
        if c == 'o':
            total = total + 1

print(total)