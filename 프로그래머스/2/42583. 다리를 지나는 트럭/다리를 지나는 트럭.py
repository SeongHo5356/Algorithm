
from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0 
    bridge = deque([0 for _ in range(bridge_length)])
    truck_weights = deque(truck_weights)
    bridge_weights = 0
    
    while (len(bridge) != 0):
        
        out = bridge.popleft()
        bridge_weights -= out
        answer += 1
        
        if truck_weights:
            if(bridge_weights + truck_weights[-1] <= weight):
                out = truck_weights.pop()
                bridge.append(out)
                bridge_weights += out
                
            else :
                bridge.append(0)
        
    
    return answer