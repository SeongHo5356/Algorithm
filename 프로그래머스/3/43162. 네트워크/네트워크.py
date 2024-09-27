def ZeroSelf(computers):
    for i in range(len(computers)):
        for j in range(len(computers)):
            if i == j:
                computers[i][j] = 0
    return computers
    
    
def solution(n, computers):
    visited = [0]*n
    computers = ZeroSelf(computers)
    cnt = 0
    
    def bfs(s):
        q = []
        q.append(s)
        visited[s] = 1
        while q:
            node = q.pop(0)
            for i in range(n):
                if visited[i] == 0 and computers[node][i] == 1:
                    q.append(i)
                    visited[i] = 1
    
    for i in range(n):
        if visited[i] == 0:
            bfs(i)
            cnt+=1
    
    return cnt 

solution(3,	[[1, 1, 0], [1, 1, 0], [0, 0, 1]])