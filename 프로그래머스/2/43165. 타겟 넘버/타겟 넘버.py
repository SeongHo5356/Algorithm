from collections import deque

def solution_1(numbers, target):
    # 아직 전체 합이 0이고, 돈 횟수 0 
    q = deque([(0, 0)]) 
    cnt = 0
    
    for i in range(len(numbers)):
        for j in range(2**i):
            cur, itr = q.popleft()    
            q.append((cur+numbers[i],itr+1))
            q.append((cur-numbers[i],itr+1))
            
    
    print(q)
    for node1, node2 in q:
        if node1 == target and node2 == len(numbers):
            cnt += 1
    
    
    return cnt 
















def DFS(numbers, target, depth):
    answer = 0
    if depth == len(numbers):
        if sum(numbers) == target : 
            return 1
        else :
            return 0
    else:
        answer += DFS(numbers, target, depth+1)
        numbers[depth] *= -1
        answer += DFS(numbers, target, depth+1)
    
    return answer
        
def solution(numbers, target):
    answer = DFS(numbers, target, 0)
    return answer
    
    