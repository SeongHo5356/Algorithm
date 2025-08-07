## 입력 받음
N,M = map(int, input().split())
Nums = sorted(list(map(int, input().split())))
v = [False] * N

ans = []
def dfs(tmp):
    if len(tmp) == M:
        ans.append(tmp[:])
        return

    for i in range(N):
        if not v[i]:
            v[i] = True
            tmp.append(Nums[i])
            dfs(tmp)
            tmp.pop()
            v[i] = False

dfs([])
anx = set()
for i in range(len(ans)):
    anx.add(tuple(ans.pop(0)))
anx = sorted(anx,key = lambda x: x)
for an in anx:
    print(" ".join(map(str, an)))


