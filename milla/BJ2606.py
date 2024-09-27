from collections import deque

N = int(input())
M = int(input())
arr = [[0]*(N+1) for _ in range(N+1)]
v = [0]*(N+1)

for _ in range(M):
    node1, node2 = map(int, input().split())
    arr[node1][node2] = 1
    arr[node2][node1] = 1
    
def bfs(start):
    q = deque([(start)])
    v[start] = 1
    ans = 0
    while q:
        out= q.popleft()
        ans += 1
        for i in range(1, N+1):
            if v[i] == 0 and arr[out][i] == 1:
                q.append((i))
                v[i] = 1
                
    return ans-1

print(bfs(1))