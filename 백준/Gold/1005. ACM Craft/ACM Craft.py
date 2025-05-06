from collections import deque
from sys import stdin
input = stdin.readline

t = int(input())
res = []

for _ in range(t):
    n, k = map(int, input().split()) # 건물의 수, 간선의 개수
    time = [0] + list(map(int, input().split())) # 각 건물들을 짓는데 걸리는 시간
    graph = [[] for _ in range(n+1)] # 간선을 등록할 그래프
    indegree = [0] * (n+1) # 위상
    dp = [0] * (n+1)
    for _ in range(k): # 간선등록
        a, b = map(int ,input().split())
        graph[a].append(b)
        indegree[b] += 1

    que = deque()
    for i in range(1, n+1): # 위상이 0인 건물들을 큐에 넣어주고 dp에 time을 넣어준다.
        if indegree[i] == 0:
            que.append(i)
            dp[i] = time[i]

    while que:
        tmp = que.popleft()
        for i in graph[tmp]:
            indegree[i] -= 1 # 위상을 하나 뺴준다 (건물을 지었으므로)
            dp[i] = max(dp[tmp] + time[i], dp[i]) # 건물을 동시에 지을 수 있기 때문에 최댓값을 dp에 넣어주어야 함
            if indegree[i] == 0: # tmp만 지으면 건물을 지을 수 있는 조건일 경우 바로 que에 넣어준다.
                que.append(i)

    w = int(input())
    res.append(dp[w]) # 결과 입력

for i in res:
    print(i) # 결과 출력