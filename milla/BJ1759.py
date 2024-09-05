L, C = map(int, input().split())
lst = list(sorted(input().split()))
ans = []
v = [0]*128
for ch in "aeiou":
    v[ord(ch)] = 1

## 최소 한개의 모음
## 최소 두개의 자음
## 오름차순 배열
## (n, lst, cnt) = (돌아본 요소, 해당배열, 모음개수)
def dfs(n, tlst, cnt):
    if n == C:
        # 개수가 4개이면서 모음 1개이상 자음 2개 이상
        if len(tlst) == L and cnt >= 1 and len(tlst)-cnt >= 2:
            ans.append(tlst)    
        return
    
    dfs(n+1, tlst + lst[n], cnt + v[ord(lst[n])])
    dfs(n+1, tlst, cnt)

dfs(0, "", 0)
for ls in ans:
    print(ls)
