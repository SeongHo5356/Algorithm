# cnt : 크기가 양수인 배열 확인 
# n : 확인한 요소의 개수
# sm : 전체 요소 합
def dfs(n, sm, cnt):
    global ans
    # 종료조건(n에 관련) + 정답관련 처리
    if n == N :
        if sm == S and cnt > 0:
            ans += 1
        return
    
    dfs(n + 1, sm + lst[n], cnt + 1)
    dfs(n + 1, sm, cnt)


N, S = map(int, input().split())
lst = list(map(int, input().split()))
ans = 0

dfs(0, 0, 0)
print(ans)

