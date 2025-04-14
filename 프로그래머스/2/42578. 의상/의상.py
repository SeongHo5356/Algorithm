def solution(clothes):
    type_dict = {}
    for cl, type in clothes:
        if type in type_dict:
            type_dict[type] += 1
        else :
            type_dict[type] = 1
        
    ans = 1
    for key in type_dict:
        ans *= (type_dict[key]+1) 
    
    return ans -1
    