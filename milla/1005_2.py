from collections import deque
from sys import stdin
input = stdin.readline

operNum = int(input())
ans = []

for _ in range(operNum):
    n, k = map(int, input().split())
    weights = [0] + list(map(int, input().split()))
    graph = [[] for _ in range(n + 1)]
    connections = [0] * (n + 1)
    dp = [0] * (n + 1)
    q = deque([])

    for i in range(k):
        start, end = map(int, input().split())
        graph[start].append(end)
        connections[end] += 1

    for i in range(1, n + 1):
        if connections[i] == 0:
            dp[i] = weights[i]
            q.append(i)

    while(q):
        cur = q.popleft()
        for node in graph[cur]:
            connections[node] -= 1
            dp[node] = max(dp[node], dp[cur] + weights[node])
            if connections[node] == 0:
                q.append(node)

    target = int(input())
    ans.append(dp[target])

for an in ans:
    print(an)







