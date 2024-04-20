def solution(before, after):
    answer = 1
    
    list_before, list_after = list(before), list(after)
    list_before.sort()
    list_after.sort()
    for i in range(len(list_before)):
        if list_before[i] != list_after[i]:
            answer = 0 
            
    return answer