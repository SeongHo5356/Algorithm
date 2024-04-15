def solution(data, ext, val_ext, sort_by):
    A,D = 0,0
    answer = []
    if ext == 'code':
        for i in range(len(data)):
            if data[i][0] < val_ext:
                answer.append(data[i])
    elif ext == 'date':
        for i in range(len(data)):
            if data[i][1] < val_ext:
                answer.append(data[i])
    elif ext == 'maximum':
        for i in range(len(data)):
            if data[i][2] < val_ext:
                answer.append(data[i])
    else :
        for i in range(len(data)):
            if data[i][3] < val_ext:
                answer.append(data[i])
        
    if sort_by == 'code':
        D = 0
    elif sort_by == 'date':
        D = 1
    elif sort_by == 'maximum':
        D = 2
    else : 
        D = 3
    
    answer.sort(key = lambda x: x[D])
    
    
    return answer