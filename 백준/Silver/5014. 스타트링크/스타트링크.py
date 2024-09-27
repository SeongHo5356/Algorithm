from collections import deque
F,S,G,U,D = map(int, input().split())

min_n = [float('inf')]
v = [0]*(F+1)

def dfs(F, S, G, U, D):
    q = deque([(S, 0)])
    v[S] = 1
    
    while q:
        ci, cnt = q.popleft()
               
        if ci == G:
            return cnt

        for di in [U, -D]:
            ni = ci + di
            if 1<=ni<=F and v[ni] == 0:
                v[ni] = 1
                q.append((ni, cnt+1))
                
    return "use the stairs"

print(dfs(F, S, G, U, D))
    