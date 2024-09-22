from collections import deque

def solution(answers):
    answer_A = [1,2,3,4,5]*8
    answer_B = [2,1,2,3,2,4,2,5]*5
    answer_C = [3,3,1,1,2,2,4,4,5,5]*10
    scores = [0,0,0]
    ans = []
    for i in range(len(answers)):
        if answers[i] == answer_A[i%40]: scores[0]+=1  
        if answers[i] == answer_B[i%40]: scores[1]+=1  
        if answers[i] == answer_C[i%40]: scores[2]+=1
    
    Highest = max(scores)
    for j in range(len(scores)):
        if scores[j] == Highest:
            ans.append(j+1)
    
    return ans
    
        
    