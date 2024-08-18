def solution(bridge_length, weight, truck_weights):
    time = 0    # 최초 경과 시간 (0으로 설정)
    bridge = [0] * bridge_length   # bridge_length 길이만큼의 리스트(큐)
    
    currentWeight = 0    # 현재 다리 위의 무게를 저장하는 변수
    while len(truck_weights) > 0:   # truck_weights가 []이 아닐 때까지 반복
        time+=1
        currentWeight = currentWeight - bridge.pop(0)
        
        # print(f"currentWeight: {currentWeight}, truck_weights: {truck_weights}")
        
        if currentWeight + truck_weights[0] <= weight:
            currentWeight += truck_weights[0]
            bridge.append(truck_weights.pop(0))
        else: 
            bridge.append(0)
        
        # print(bridge)
        
    time += bridge_length
    return(time) 