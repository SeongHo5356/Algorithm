from collections import deque
import sys

input = sys.stdin.readline
W, H = map(int, input().split())
map = [list(input().rstrip()) for _ in range(H)]

# C 두개 위치 찾기
Cs = []
for i in range(H):
    for j in range(W):
       if map[i][j] == 'C':
           Cs.append((i,j))

(sx, sy), (ex, ey) = Cs

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

INF = 10**9
dist = [[[INF] * 4 for _ in range(W)] for __ in range(H)]

dQ = deque()
for d in range(4):
    dist[sx][sy][d] = 0
    dQ.append((sx, sy, d))

while dQ:
    cx, cy, dir = dQ.popleft()

    for nd in range(4):
        nx = cx + dx[nd]
        ny = cy + dy[nd]

        if not (0 <= nx < H and 0 <= ny < W):
            continue
        if map[nx][ny] == '*':
            continue

        if dir == nd:
            extra = 0
        else:
            extra = 1

        cost = dist[cx][cy][dir] + extra

        if dist[nx][ny][nd] > cost:
            dist[nx][ny][nd] = cost
            if extra == 0:
                dQ.appendleft((nx, ny, nd))
            else:
                dQ.append((nx, ny, nd))

print(min(dist[ex][ey]))