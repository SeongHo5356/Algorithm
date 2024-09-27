from collections import deque

N, K = map(int, input().split())
v = [0]*(100000*2+1)

def bfs(si, ei):
    q = deque([(si, 0)])
    v[si] = 1
    while q:
        ci, cnt = q.popleft()
        #print("ci:{}, cnt:{}".format(ci, cnt))
        if ci == ei:
            return cnt
        
        for di in (ci*2, ci+1, ci-1):
            ni = di
            if 0<=ni<(100000*2+1) and v[ni]==0:
                v[ni] = 1
                q.append((ni, cnt+1))
    
    return cnt

print(bfs(N,K))