def solution(brown, yellow):
    
    for i in range(1, yellow+1):
        col = yellow//i
        row = i
        
        if col*row != yellow : 
            continue
        else :
            if ((col+2)+row)*2 == brown:
                return [col+2,row+2]