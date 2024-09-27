import sys
from collections import deque
input = sys.stdin.readline

def bfs(i, j, height):
    q = deque([(i, j)])
    visited[i][j] = 1
    
    while q:
        ci, cj = q.popleft()
        for di, dj in ((-1, 0), (1, 0), (0, 1), (0, -1)):
            ni, nj = ci + di, cj + dj
            if 0 <= ni < N and 0 <= nj < N and visited[ni][nj] == 0 and arr[ni][nj] > height:
                q.append((ni, nj))
                visited[ni][nj] = 1

N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

max_height = max(max(row) for row in arr)
result = 1  # 아무 지역도 물에 잠기지 않는 경우

for height in range(1, max_height):
    visited = [[0] * N for _ in range(N)]
    cnt = 0
    
    for i in range(N):
        for j in range(N):
            if arr[i][j] > height and visited[i][j] == 0:
                bfs(i, j, height)
                cnt += 1
    
    result = max(result, cnt)

print(result)