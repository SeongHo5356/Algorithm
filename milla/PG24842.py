def solution(brown, yellow):
    
    for i in range(1, yellow+1):
        col = yellow//i
        row = i
        print("col, row : {},{}".format(col,row))
        
        if col*row != yellow : 
            print("continue")
            continue
        else :
            if ((col+2)+row)*2 == brown:
                print(col+2,row+2)
                return [col+2,row+2]

solution(10,2)
solution(8,1)
solution(24,24)