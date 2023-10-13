#Accepted
t = int(input())
for j in range(t):
    n = input()
    i=1
    for x in n:
        if x==' ':
            print(x,end="")            
        else:
            if i==1:
                print(x.upper(),end="")        
            else:
                print(x.lower(),end="")
            i=i*(-1)
    print()
        
