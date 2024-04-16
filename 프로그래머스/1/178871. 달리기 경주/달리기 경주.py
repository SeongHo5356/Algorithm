def solution(players, callings):
    dict1 = {letter : i for i, letter in enumerate(players)}
    
    for call in callings:
        idx = dict1[call]
        players[idx], players[idx-1] = players[idx-1], players[idx]
        dict1[players[idx]] += 1
        dict1[players[idx-1]] -= 1
        
    return players