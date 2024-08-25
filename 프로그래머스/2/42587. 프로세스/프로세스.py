from collections import deque

def solution(pri, location):
    pri_deque = deque(pri)
    order = 0
    
    while pri_deque:
        if pri_deque[0] < max(pri_deque):
            pri_deque.append(pri_deque.popleft())
            location -= 1
            if location == -1 :
                location = len(pri_deque) - 1
            
        else :
            pri_deque.popleft()
            
            if location == 0 :
                order += 1 
                break
            else :
                location -= 1
                order += 1
            
            
    return order 