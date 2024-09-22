from itertools import combinations as cb
import sys

def dfs(round):
    global ans
    # 중단조건
    # 15라운드가 지나고, 승, 무, 패가 모두 0이면 answer = 1
    if round == 15:
        ans = 1
        for rs in res :
            if rs.count(0) != 3:
                ans = 0
                break
        return

    ## 지속조건
    t1, t2 = match[round]
    for x, y in ((0,2), (1,1), (2,0)):
        if res[t1][x] > 0 and res[t2][y] >0:
            res[t1][x] -= 1
            res[t2][y] -= 1
            dfs(round + 1)
            res[t1][x] += 1
            res[t2][y] += 1


match = list(cb(range(6),2))    # 대진상대 조합
result = []

for _ in range(4):
    ans = 0
    data = list(map(int,sys.stdin.readline().split()))    #입력값
    res = [data[i:i+3] for i in range(0,16,3)]  # 입력값을 팀별로 저장
    dfs(0)
    result.append(ans)

print(*result)

    
