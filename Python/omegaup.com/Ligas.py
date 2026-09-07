import sys

def main():
    t = int(input())
    for i in range(1,t+1):
        x1,y1,x2,y2,x3,y3,x4,y4 = map(int, input().split())
        
        d1 = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2)
        d2 = (y2 - y1) * (x4 - x2) - (x2 - x1) * (y4 - y2)
        d3 = (y4 - y3) * (x1 - x4) - (x4 - x3) * (y1 - y4)
        d4 = (y4 - y3) * (x2 - x4) - (x4 - x3) * (y2 - y4)

        if ((d1>0 and d2<0) or (d1<0 and d2>0)) and ((d3>0 and d4<0) or (d3<0 and d4>0)):
            print(f"Caso {i}: Hay interseccion.")
            
        elif d1 == 0 and (min(x1,x2) <= x3 <= max(x1,x2)) and (min(y1,y2) <= y3 <= max(y1,y2)):
            print(f"Caso {i}: Hay interseccion.")
            
        elif d2 == 0 and (min(x1,x2) <= x4 <= max(x1,x2)) and (min(y1,y2) <= y4 <= max(y1,y2)):
            print(f"Caso {i}: Hay interseccion.")
            
        elif d3 == 0 and (min(x3,x4) <= x1 <= max(x3,x4)) and (min(y3,y4) <= y1 <= max(y3,y4)):
            print(f"Caso {i}: Hay interseccion.")
            
        elif d4 == 0 and (min(x3,x4) <= x2 <= max(x3,x4)) and (min(y3,y4) <= y2 <= max(y3,y4)):
            print(f"Caso {i}: Hay interseccion.")
            
        else:
            print(f"Caso {i}: No hay interseccion.")

if __name__ == '__main__':
    main()