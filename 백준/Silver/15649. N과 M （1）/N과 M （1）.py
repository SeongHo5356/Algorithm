# 가능한 '모든 경우' 실행
# 선택된 숫자개수(길이)
# **길이 M 짜리 수열
import sys
sys.setrecursionlimit(10**6)

# n : 선택된 숫자 개수(길이)
def dfs(n, lst):

    # 종료조건 호출
    if n == M:
        ans.append(lst)
        return
    
    # 하부단계(함수) 호출
    for j in range(1, N+1):
        if v[j] == 0:
            v[j] = 1
            dfs(n+1, lst+[j])
            v[j] = 0

N, M = map(int, input().split())
ans = []
v = [0] * (N+1)

dfs(0,[])

for lst in ans:
    print(*lst)