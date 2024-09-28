from collections import deque

def solution(tickets):
    tickets.sort(key=lambda x: (x[0], x[1]))
    
    def bfs():
        q = deque([("ICN", ["ICN"], [])])
        
        while q:
            airport, path, used = q.popleft()
            
            if len(used) == len(tickets):
                return path
            
            for i, (start, end) in enumerate(tickets):
                if airport == start and i not in used:
                    q.append((end, path + [end], used + [i]))
        
        return []  # 유효한 경로를 찾지 못한 경우

    return bfs()