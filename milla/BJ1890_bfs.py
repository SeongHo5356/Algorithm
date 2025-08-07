import sys
input = sys.stdin.readline
N = int(input())

blocks = [list(map(int, input().split())) for _ in range(N)]
ans = 0
queue = []

def bfs(si, sj):
    global ans
    queue.append((si,sj))
    while queue:
        ci, cj = queue.pop(0)
        for di, dj in ((0,1),(1,0)):
            ni, nj = ci + di * blocks[ci][cj], cj + dj * blocks[ci][cj]
            if 0 <= ni <= (N-1) and 0 <= nj <= (N-1):
                if (ni, nj) == (N-1,N-1):
                    ans += 1
                else:
                    queue.append((ni,nj))
    print(ans)
                
bfs(0,0)
                
                
                        