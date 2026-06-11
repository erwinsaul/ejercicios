p, cp, cg = map(int, input().split())
for i in range(p):
    n = int(input())
    if n%cp == 0 or n%cg == 0:
        print("Si")
    else:
        sw = False
        for j in range(1, (n//cp)+1):
            for k in range(1, (n//cg)+1):
                if j*cp + k*cg == n:
                    sw = True
                    break
        
        if sw:
            print("Si")
        else:
            print("No")
        