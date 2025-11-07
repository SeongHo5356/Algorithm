from collections import deque

def solution(priorities, location):
    answer = [] 
    queue = []
    
    for i in range(len(priorities)):
        queue.append([priorities[i], i])
    
    count = 1
    while(True):
        # print("queue", queue)
        cur = queue.pop(0)
        # print("popped queue", queue)
        # print("cur", cur)
        
        if cur[1] == location and cur[0] >= calculateMax(queue):
            # print("ans", cur)
            # print("count", count)
            return count
        
        if cur[0] >= calculateMax(queue):
            # print("cur[0]", "calculateMax(queue)", cur[0], calculateMax(queue))
            count += 1
        
        else:
            queue.append(cur)

def calculateMax(queue):
    max = 0
    for i in range(len(queue)):
        if max < queue[i][0]:
            max = queue[i][0]
    return max