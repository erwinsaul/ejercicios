#Accepted
n = int(input())

for i in range(n):
    nk = input().split()
    a = int(nk[0])
    b = int(nk[1])
    if a==b:
        print("=")
    elif a>b:
        print(">")
    else:
        print("<")
