def solution(dirs):
    answer = 0
    visied_edge = set()
    sy, sx = 5,5
    
    for dir in dirs:
        if dir == 'U': dy, dx = (1,0)
        elif dir == 'D': dy, dx = (-1,0)
        elif dir == 'R': dy, dx = (0,1)
        else: dy, dx = (0,-1)
        ny, nx = sy + dy, sx + dx
        
        if (0 <= ny <= 10 and 0 <= nx <= 10):
            new_edge = ((sy, sx), (ny, nx))
            rev_edge = ((ny, nx), (sy, sx))
            
            if new_edge not in visied_edge:
                visied_edge.add(new_edge)
                visied_edge.add(rev_edge)
                answer += 1
            
            sy, sx = ny, nx
    
        
    return answer