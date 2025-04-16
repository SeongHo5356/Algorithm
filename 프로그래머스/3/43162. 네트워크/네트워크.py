def ZeroSelf(computers):
    for i in range(len(computers)):
        for j in range(len(computers)):
            if i == j:
                computers[i][j] = 0
    return computers
    
    
def solution_1(n, computers):
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


'''
def solution(n, computers):
    answer = 0
    visited = [False for _ in range(n)]
    
    for i in range(n):
        if visited[i] == False:
            #### 파이썬에서 mutable 객체를 인자로 전달하면 무조건 참조에 의한 전달이 일어남
            dfs(n, computers, i, visited)
            answer += 1
    return answer

def dfs(n, computers, now, visited):
    visited[now] = True
    for i in range(n):
        if i != now and visited[i] == False and computers[i][now]:
            dfs(n, computers, i, visited)
'''


def solution(n, computers):
    answer = 0
    visited = [False for _ in range(n)]
    
    for i in range(n):
        if visited[i] == False:
            #### 파이썬에서 mutable 객체를 인자로 전달하면 무조건 참조에 의한 전달이 일어남
            bfs(n, computers, i, visited)
            answer += 1
    return answer

def bfs(n, computers, now, visited):
    visited[now] = True
    queue = []
    queue.append(now)
    
    while queue:
        com = queue.pop(0)
        visited[com] = True
        for i in range(n):
            if i != com and visited[i] == False and computers[com][i] == 1:
                queue.append(i)
        
