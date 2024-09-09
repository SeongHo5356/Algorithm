def solution(n, 검사관리스트):
    tlst = [0]*len(검사관리스트)
    for i in range(n):
        for j in range(len(검사관리스트)):
            tlst[j] += 검사관리스트[j]
        
        minNum = min(tlst)
        minIndex = tlst.index(minNum)
        
        if i != n-1:
            for k in range(len(검사관리스트)):
                if k != minIndex :
                    tlst[k]-=검사관리스트[k]
                    
    return min(tlst)