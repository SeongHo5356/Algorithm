import sys
from collections import deque
input = sys.stdin.readline

N, K = map(int, input().split())

def bfs_end(N, K):
    q = deque([N])
    v = [-1]*(100001)   # 최단 방문 시간
    r = [0]*(100001)    # 해당 곳까지 가는 방법의 수
    r[N] = 1
    v[N] = 0

    while q:
        cur = q.popleft()
        for nxt in (cur * 2, cur + 1, cur - 1):
            if 0 <= nxt < 100001:
                if v[nxt] == -1:
                    v[nxt] = v[cur] + 1
                    r[nxt] = r[cur]
                    q.append(nxt)
                elif v[nxt] == v[cur] + 1:
                    r[nxt] += r[cur]

    return v[K], r[K]

steps, q = bfs_end(N, K)
print(steps)
print(q)



