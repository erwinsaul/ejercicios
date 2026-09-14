import sys
from collections import deque

def main():
    n, m = map(int, input().split())
    gr = { i : [] for i in range(1,n+1) }
    for i in range(m):
        ini, fin = map(int, input().split())
        gr[ini].append(fin)
        gr[fin].append(ini)
    vis = [False] * (n+1)
    
    r = 0
    for i in range(1,n+1):
        if not vis[i]:
            r = r + 1
            q = deque()
            q.append(i)
            vis[i] = True
            while q:
                v = q.popleft()
                for u in gr[v]:
                    if not vis[u]:
                        vis[u] = True
                        q.append(u)            

    print(r - 1)


if __name__ == '__main__':
    main()