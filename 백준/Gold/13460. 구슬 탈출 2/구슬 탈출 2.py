import sys
from collections import deque

input = sys.stdin.readline

N, M = map(int, input().split())
arr = [list(input().strip()) for _ in range(N)]
visited = []
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]
q = deque()

rx, ry, bx, by = 0, 0, 0, 0

for i in range(N):
    for j in range(M):
        if arr[i][j] == 'R':
            rx, ry = i, j
        if arr[i][j] == 'B':
            bx, by = i, j

q.append([rx, ry, bx, by, 1])
visited.append([rx, ry, bx, by])


def move(x, y, i, j):
    count = 0
    while arr[x+i][y+j] != '#' and arr[x][y] != 'O':
        x += i
        y += j
        count += 1
    return x, y, count


def bfs():
    while q:
        rx, ry, bx, by, cnt = q.popleft()

        if cnt > 10:
            break
        for i in range(4):
            nrx, nry, rCnt = move(rx, ry, dx[i], dy[i])
            nbx, nby, bCnt = move(bx, by, dx[i], dy[i])

            if arr[nbx][nby] == 'O':
                continue

            if arr[nrx][nry] == 'O':
                return cnt

            if nrx == nbx and nry == nby:
                if rCnt > bCnt:
                    nrx -= dx[i]
                    nry -= dy[i]
                else:
                    nbx -= dx[i]
                    nby -= dy[i]

            if [nrx, nry, nbx, nby] not in visited:
                visited.append([nrx, nry, nbx, nby])
                q.append([nrx, nry, nbx, nby, cnt+1])
    return -1


print(bfs())