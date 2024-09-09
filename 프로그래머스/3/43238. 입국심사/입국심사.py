def solution(m, times):
    start = 1 
    end = min(times) * m
    
    while start <= end :
        mid = (start + end) // 2
        cnt = 0
        for time in times :
            cnt += mid // time 

        if cnt < m:
            start = mid + 1
        else :
            end = mid - 1

    return start 