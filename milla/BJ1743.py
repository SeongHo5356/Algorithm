import sys
from collections import deque
input = sys.stdin.readline

N,M,K = map(int, input().split())
Blocks = [[0]*(M+1) for _ in range(N+1)]
V = [[False]*(M+1) for _ in range(N+1)]

for i in range(K):
    cy,cx = map(int, input().split())
    Blocks[cy][cx] = 1

def bfs(sy,sx):
    size = 1
    q = deque([[sy, sx]])
    V[sy][sx] = True

    while q:
        y,x = q.popleft()
        for dy,dx in [(1,0), (-1,0), (0,1), (0,-1)]:
            if 0 < y + dy <= N and 0 < x + dx <= M and Blocks[y + dy][x + dx] == 1 and V[y + dy][x + dx] == False:
                V[y + dy][x + dx] = True
                q.append([y+dy, x+dx])
                size += 1

    return size

ans = 0
for i in range(1, N + 1):
    for j in range(1, M + 1):
        if Blocks[i][j] == 1 and V[i][j] == False:
            ans = max(ans, bfs(i,j))

print(ans)






