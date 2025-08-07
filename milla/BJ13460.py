from sys import stdin
from collections import deque
input = stdin.readline


N,K = map(int, input().split())
Graph = [list(input().rstrip()) for _ in range(N)]
ry, rx, by, bx = 0, 0, 0, 0

for i in range(N):
    for j in range(K):
        if Graph[i][j] == 'R':
            ry, rx = i, j
        if Graph[i][j] == 'B':
            by, bx = i, j

def move(y, x, dy, dx):
    cnt = 0
    while Graph[y+dy][x+dx] != '#' and Graph[y][x] != 'O':
        x += dx
        y += dy
        cnt += 1
    return y, x, cnt

q = deque([[ry, rx, by, bx, 1]])
visited = [[ry, rx, by, bx]]
def bfs():
    while q:
        ry, rx, by, bx, cnt = q.popleft()

        if cnt > 10:
            break

        for dy, dx in ((-1,0),(1,0),(0,1),(0,-1)):
            nry, nrx, rcnt = move(ry, rx, dy, dx)
            nby, nbx, bcnt = move(by, bx, dy, dx)
            if Graph[nby][nbx] == 'O':
                continue
            if Graph[nry][nrx] == 'O':
                return cnt
            if nby == nry and nbx == nrx:
                if rcnt > bcnt:
                    nry -= dy
                    nrx -= dx
                else :
                    nby -= dy
                    nbx -= dx

            if [nry, nrx, nby, nbx] not in visited:
                visited.append([nry, nrx, nby, nbx])
                q.append([nry, nrx, nby, nbx, cnt + 1])

    return -1

print(bfs())


