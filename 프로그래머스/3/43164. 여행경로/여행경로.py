from collections import deque

def solution_1(tickets):
    v = [0]*len(tickets)
    tickets.sort()
    #tickets.sort(key=lambda x: (x[0], x[1]))
    print(tickets)
    
    q = deque([(["ICN"], v)])
    
    while q:
        path, v = q.popleft()
        
        if sum(v) == len(tickets):
            return path
        
        for i in range(len(tickets)):
            if v[i] == 0 and path[-1] == tickets[i][0]:
                new_path = path + [tickets[i][1]]
                new_v = v[:]
                new_v[i] = 1
                
                q.append((new_path, new_v))       
    
    return []


def solution_2(tickets):
    # tickets_sorted = sorted(tickets, key = lambda x:(x[0], x[1]))
    tickets.sort(key = lambda x:(x[0], x[1]))
    path = []
    q = [["ICN", path]]
         
    while q:
        depart, path = q.pop(0)
        
        if len(path) == len(tickets) + 1:
            return path
        
        for dep, des in tickets:
            if depart == dep and des not in path:
                q.append([des, path.append(des)])
        print(q)
                
    
from collections import deque

def solution_1016(tickets):
    visited = [0] * len(tickets)
    tickets.sort(key = lambda x:(x[0], x[1]))
    queue = [[["ICN"], visited]]
    
    while queue:
        pth, visited = queue.pop(0)
        
        if len(pth) == len(tickets) + 1:
            return pth
        
        for i in range(len(tickets)):
            if visited[i] == 0 and tickets[i][0] == pth[-1]:
                nxt_visited = visited[:]
                nxt_visited[i] = 1
                queue.append([pth + [tickets[i][1]], nxt_visited])
                

                
                
                

                
                
                
                
                
                
def solution_1016(tickets):
    visited = [0] * len(tickets)
    tickets.sort(key = lambda x:(x[0], x[1]))
    queue = [[["ICN"], visited]]
    
    while queue:
        pth, visited = queue.pop(0)
        
        if len(pth) == len(tickets) + 1:
            return pth
        
        for i in range(len(tickets)):
            if visited[i] == 0 and tickets[i][0] == pth[-1]:
                nxt_visited = visited[:]
                nxt_visited[i] = 1
                queue.append([pth + [tickets[i][1]], nxt_visited])
                
                
                
                
def solution(tickets):
    tickets.sort(key = lambda x:(x[0], x[1]))
    visited = [0] * len(tickets)
    queue = [[["ICN"], visited]]
    
    while queue:
        pth, visited = queue.pop(0)
        
        if len(pth) == len(tickets) + 1:
            return pth
        
        for i in range(len(tickets)):
            if(visited[i] == 0 and tickets[i][0] == pth[-1]):
                nxt_visited = visited[:]
                nxt_visited[i] = 1
                queue.append([pth + [tickets[i][1]], nxt_visited])
                
                
        
    
    
        
    