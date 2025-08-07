N,S,M = map(int, input().split())
v = list(map(int, input().split()))
dp = [[-1] * (M+1) for _ in range(N+1)]

for i in range(N):
    if i == 0:
        if S + v[i] <= M:
            dp[1][S + v[i]] = 1
        if S - v[i] >= 0:
            dp[1][S - v[i]] = 1
    else:
        for k in range(M+1):
            if dp[i][k] == 1:
                if k + v[i] <= M:
                    dp[i+1][k + v[i]] = 1
                if k - v[i] >= 0:
                    dp[i+1][k - v[i]] = 1
ans = -1
for dps in dp:
    print(dps)
for i in range(M+1):
    if dp[N][i] == 1 and ans < i:
        ans = i

print(ans)
