import sys
sys.setrecursionlimit(10**6)
ans = 0

# dfs 로 시도했지만, 효율성 테스트 케이스에서 모두 시간초과가 남
def solution_2(maps): 
    global ans
    row, col =  len(maps), len(maps[0])
    ans = col*row + 1
    v = [[0]*col for _ in range(row)]
    v[0][0] = 1
    
    def dfs(si, sj, cnt):
        global ans
        print(cnt)
        if si == row-1 and sj == col-1:
            if cnt < ans:
                ans = cnt
        
        for di, dj in ((-1,0),(1,0),(0,1),(0,-1)):
            ni, nj = si + di, sj + dj
            if 0<=ni<row and 0<=nj<col and v[ni][nj] == 0 and maps[ni][nj] == 1:
                #print("ni, nj : {}, {}".format(ni,nj))
                v[ni][nj] = 1
                cnt += 1
                #print("cnt : ", cnt)
                dfs(ni, nj, cnt)
                v[ni][nj] = 0
                cnt -= 1
        
        if ans == col*row + 1:
            return -1
        else : 
            return ans    
        
    dfs(0,0,1)
    if ans == col*row + 1:
        return -1
    
    return ans

from collections import deque

# 최단경로 탐색의 경우 bfs가 무조건 더 나음
def solution(maps):
    row, col = len(maps), len(maps[0])
    v = [[0]*col for _ in range(row)]
    
    q = deque()
    si, sj, dist = 0, 0, 1
    q.append((si, sj, dist))
    v[si][sj] = 1
    
    while q:
        ci, cj, dist = q.popleft()
        
        if ci == row-1 and cj == col-1:
            return dist
        
        for di, dj in ((-1,0),(1,0),(0,1),(0,-1)):
            ni, nj = ci + di, cj + dj
            if 0<=ni<row and 0<=nj<col and maps[ni][nj] == 1 and v[ni][nj] == 0:
                v[ni][nj] = 1
                q.append((ni,nj,dist+1))
    
    return -1
