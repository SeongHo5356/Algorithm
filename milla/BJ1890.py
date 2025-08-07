import sys
input = sys.stdin.readline

N = int(input())
path = [list(map(int, input().split())) for _ in range(N)]

col = len(path[0])
row = len(path)
dp = [[0] * col for _ in range(row)]
dp[0][0] = 1
for i in range(col):
    for k in range(row):
        if i == col-1 and k == row-1:
            break
        if dp[k][i] >= 1:
            if i + path[k][i] < col:
                dp[k][i + path[k][i]] += dp[k][i]
            if k + path[k][i] < row:
                dp[k + path[k][i]][i] += dp[k][i]

print(dp[row-1][col-1])