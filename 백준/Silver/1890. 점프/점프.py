import sys
input = sys.stdin.readline

N = int(input())
blocks = [list(map(int, input().split())) for _ in range(N)]
dp = [[0]*N for _ in range(N)]
dp[0][0] = 1

for i in range(N):
    for  j in range(N):
        block = blocks[i][j]
        if i == N-1 and j == N-1:
            break
        if i + block < N:
            dp[i + block][j] += dp[i][j]
             
        if j + block < N :
            dp[i][j + block] += dp[i][j]
        
print(dp[N-1][N-1])
    