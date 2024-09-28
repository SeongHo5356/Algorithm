from collections import deque

def solution(numbers, target):
    # 아직 전체 합이 0이고, 돈 횟수 0 
    q = deque([(0, 0)]) 
    cnt = 0
    
    for i in range(len(numbers)):
        for j in range(2**i):
            cur, itr = q.popleft()    
            q.append((cur+numbers[i],itr+1))
            q.append((cur-numbers[i],itr+1))
            
    for node1, node2 in q:
        if node1 == target and node2 == len(numbers):
            cnt += 1
    
    
    return cnt 

# 테스트
print(solution([1, 1, 1, 1, 1], 3))  # 5를 출력해야 함
print(solution([4, 1, 2, 1], 4))     # 2를 출력해야 함