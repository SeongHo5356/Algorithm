import sys
from collections import deque
input = sys.stdin.readline

N, M, K = map(int, input().split())
board = [[0]*(M+1) for _ in range(N+1)]
for _ in range(K):
    r, c = map(int, input().split())
    board[r][c] = 1

visited = [[False]*(M+1) for _ in range(N+1)]

def bfs(sy, sx):
    q = deque([(sy, sx)])
    visited[sy][sx] = True
    size = 1

    while q:
        y, x = q.popleft()
        for dy, dx in [(1,0),(-1,0),(0,1),(0,-1)]:
            ny, nx = y + dy, x + dx
            if 1 <= ny <= N and 1 <= nx <= M \
               and board[ny][nx] == 1 and not visited[ny][nx]:
                visited[ny][nx] = True
                q.append((ny, nx))
                size += 1

    return size

max_size = 0
for i in range(1, N+1):
    for j in range(1, M+1):
        if board[i][j] == 1 and not visited[i][j]:
            max_size = max(max_size, bfs(i, j))

print(max_size)
