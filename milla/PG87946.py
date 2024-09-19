def cnt_inf(n, wires):
    temp = [[0]*(n+1) for _ in range(n+1)]
    for wire in wires:
        i = wire[0]
        j = wire[1]
        temp[i][j] = 1
        temp[j][i] = 1
    return temp

def solution(n, wires):
    answer = -1
    wires = cnt_inf(n, wires)
    for i in range(n+1):
        for j in range(n+1):
             
    
    return answer