N, M = map(int, input().split())
arr = [list(map(int, input())) for _ in range(N)]
v = [[0]*M for _ in range(N)]

def bfs(arr, v):
    q = []
    si, sj = 0,0
    q.append((si,sj))
    v[si][sj] = 1
    
    while q:
        ci,cj = q.pop(0)
        for di, dj in ((-1,0),(1,0),(0,-1),(0,1)):
            ni, nj = ci+di, cj+dj
            if 0<=ni<N and 0<=nj<M and v[ni][nj] == 0 and arr[ni][nj] == 1: 
                q.append((ni,nj))
                v[ni][nj] = v[ci][cj] + 1
    
    print(v[N-1][M-1])
    return -1
                
    
def printV(arr):
    for listM in arr:
        print(listM)
    print('\n')
        
bfs(arr,v)