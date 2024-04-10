def solution(name, yearning, photo):
    answer = []
    
    for i in range(len(photo)):
        ttl = 0
        for k in range(len(name)):
            cnt = photo[i].count(name[k])
            ttl += cnt*yearning[k]
        
        answer.append(ttl)
        
    return answer