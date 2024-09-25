N = int(input())
lst = [[0]*N for _ in range(N)]
ans = 0

def dfs(n):
    global ans
    if n == N:
        return
    