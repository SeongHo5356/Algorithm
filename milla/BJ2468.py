import sys
from collections import deque
input = sys.stdin.readline

def bfs(si, sj, st):
    q = deque([(si,sj)])
    v[si][sj] = 1
    
    while q:
        ci, cj = q.popleft()
        for di,dj in ((-1,0),(1,0),(0,1),(0,-1)):
            ni, nj = ci+di, cj+dj
            if 0<=ni<N and 0<=nj<N and v[ni][nj] == 0 and arr[ni][nj] > st:
                q.append((ni,nj))
                v[ni][nj] = 1

N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]
mx = max(max(row) for row in arr)
ans = 1

for st in range(1, mx):
    v = [[0]*N for _ in range(N)] 
    cnt = 0
    
    for i in range(N):
        for j in range(N):
            if arr[i][j] > st and v[i][j] == 0:
                bfs(i,j,st)
                cnt += 1 
    
    print("결과", st, cnt, mx, i, j)    
    ans = max(ans, cnt)
    
print(ans)    
        
    
