from collections import deque
import sys
input = sys.stdin.readline

W, H = map(int, input().split())
board = [list(input().rstrip()) for _ in range(H)]

# C 두 개 위치 찾기
C = []
for i in range(H):
    for j in range(W):
        if board[i][j] == 'C':
            C.append((i, j))

(sx, sy), (ex, ey) = C  # start C, end C

# 방향: 0=상, 1=하, 2=좌, 3=우
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

INF = 10**9
# dist[x][y][dir] = (x,y)에 dir 방향으로 도달할 때 필요한 최소 거울 개수
dist = [[[INF] * 4 for _ in range(W)] for __ in range(H)]

dq = deque()

# 시작점에서 4방향 모두 "거울 0개"로 시작
for d in range(4):
    dist[sx][sy][d] = 0
    dq.append((sx, sy, d))

while dq:
    x, y, dir = dq.popleft()

    # 현재 상태에서 이미 더 좋은 값이 있으면 스킵 (가지치기)
    if dist[x][y][dir] > dist[x][y][dir]:
        continue

    for nd in range(4):
        nx = x + dx[nd]
        ny = y + dy[nd]

        # 범위 밖 or 벽이면 패스
        if not (0 <= nx < H and 0 <= ny < W):
            continue
        if board[nx][ny] == '*':
            continue

        # 회전 여부에 따라 비용 0 또는 1 증가
        extra = 0 if dir == nd else 1
        cost = dist[x][y][dir] + extra

        # 더 적은 거울로 갈 수 있을 때만 업데이트
        if dist[nx][ny][nd] > cost:
            dist[nx][ny][nd] = cost
            if extra == 0:
                dq.appendleft((nx, ny, nd))  # 직진(0비용) → 앞에
            else:
                dq.append((nx, ny, nd))      # 회전(1비용) → 뒤에

# 도착 C에 도달하는 4방향 중 최소값이 정답
print(min(dist[ex][ey]))
