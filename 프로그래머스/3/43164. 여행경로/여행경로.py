from collections import deque

def solution(tickets):
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

#solution([["ICN", "JFK"], ["HND", "IAD"], ["JFK", "HND"]])