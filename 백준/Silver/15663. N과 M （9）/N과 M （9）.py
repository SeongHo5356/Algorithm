## 입력 받음
N,M = map(int, input().split())
lst = sorted(list(map(int, input().split()))) 

## 정답 도출에 필요한 리스트
v = [0]*N   # 해당 요소를 사용한 적 있는지 -> 중복을 없애기 위해 
ans = []    # 정답을 담기 위해

def dfs(n, tlst):
    ## 재귀 중단조건
    if n == M:
        ans.append(tlst)
        return
    
    ## 전에 넣은수를 중복해서 또 넣으면 안되기 때문에 1,9 / 1,9
    prev = 0
    for j in range(N):
        # 방문한적 없는 
        if v[j] == 0 and prev != lst[j]:
            prev = lst[j]
            # 방문했다고 1을넣음
            v[j] = 1
            dfs(n + 1, tlst + [lst[j]])
            # 다음을 위해서 초기화
            v[j] = 0

dfs(0, [])

## 정답 출력
for lst in ans:
    print(*lst)


