import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

def dfs(arr, i, v):
    v[i] = 1
    for j in arr[i]:
        if v[j] == 0:
            dfs(arr, j, v)

node , edge = map(int, input().split())     # 노드, 엣지 갯수 입력받음
arr = [[] for _ in range(node+1)]           # n+1 x n+1 배열 생성 , 0번째는 사용하지 않음
v = [0] * (node+1)             # 각 노드를 방문했는지 확인용 리스트
cnt = 0                                     # DFS를 몇번 했는지
for i in range(edge):
    node1, node2 = map(int, input().split())
    arr[node1].append(node2)
    arr[node2].append(node1)

for i in range(1, node+1):
    if v[i] == 0:
        dfs(arr, i, v)
        cnt += 1            # dfs 끝날때마다 cnt += 1
        
print(cnt)
    
        