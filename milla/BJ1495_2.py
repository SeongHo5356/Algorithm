# N : 3개의 곡을 연주하고, 
# S : 5의 볼륨으로 시작하고
# M : 10이 최대 볼륨
# 노래를 연주 한 후, 가능한 마지막곡의 최댓값을 출력
import sys
input = sys.stdin.readline

N, S, M = map(int, input().split())
V = list(map(int, input().split()))
dp = [[0]*(M+1) for _ in range(len(V))]

for i in range(len(V)):
    if i == 0 :
        if S + V[i] <= M:
            dp[0][S+V[i]] = 1
        if S - V[i] >= 0:
            dp[0][S-V[i]] = 1
    else: 
        for j in range(M+1):
            if dp[i-1][j] == 1:
                if j + V[i] <= M:
                    dp[i][j + V[i]] = 1
                if j - V[i] >= 0:
                    dp[i][j - V[i]] = 1

ans = -1
for i in range(M+1):
    if dp[N-1][i] == 1 and ans <= i:
        ans = i

print(ans)