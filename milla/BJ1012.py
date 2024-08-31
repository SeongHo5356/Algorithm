import sys
input = sys.stdin.readline

caseNum = int(input())
ans = []

def bfs(si, sj):
    q = []    
    q.append((si, sj))
    v[si][sj] = 1
    
    while q :
        ci, cj = q.pop(0)
        for di, dj in ((1,0),(-1,0),(0,1),(0,-1)):
            ni, nj = ci + di, cj + dj
            if 0 <= ni < N and 0 <= nj < M and v[ni][nj] == 0 and arr[ni][nj] == 1:
                q.append((ni,nj))
                v[ni][nj] = 1     
    


for _ in range(caseNum):
    M, N, K = map(int, input().split())
    arr = [[0] * M for _ in range(N)]
    v = [[0] * M for _ in range(N)]
    cnt = 0
    for _ in range(K):
        node1, node2 = map(int, input().split())
        arr[node2][node1] = 1

    for i in range(N):
        for j in range(M):
            if arr[i][j] == 1 and v[i][j] == 0 :
                bfs(i,j)
                cnt += 1
                
    ans.append(cnt)

print(*ans, sep = '\n')                

            