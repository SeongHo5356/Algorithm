from collections import deque

np = int(input())
node1, node2 = map(int, input().split())
ne = int(input())
arr = [[0]*(np+1) for _ in range(np+1)]
v = [0]*(np+1)

for _ in range(ne):
    node3, node4 = map(int, input().split())
    arr[node3][node4] = 1
    arr[node4][node3] = 1

def bfs(start, target):
    q = deque()
    q.append((start,0))
    v[start] = 1
    
    while q:
        out, cnt = q.popleft()
        if out == target:
            return cnt
        
        for i in range(1, np+1):
            if v[i] == 0 and arr[out][i] == 1:
                q.append((i,cnt+1))
                v[i] = 1
                
    return -1

print(bfs(node1, node2))
        
