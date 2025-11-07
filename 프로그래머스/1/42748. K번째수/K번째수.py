def solution_1108(array, commands):
    answer = []
    for i in range(len(commands)):
        new_arry = array[commands[i][0]-1 : commands[i][1]]
        new_arry.sort()
        trgt = new_arry[commands[i][2]-1]
        answer.append(trgt)
    return answer

def solution(array, commands):
    answer = []
    
    for command in commands:
        i,j,k = command[0], command[1], command[2]
        temp = array[i-1:j].sort()
        answer.append(temp[k])
        
    return answer

















def solution(array, commands):
    answer = []
    for start, end, idx in commands:
        tmp = sorted(array[start-1:end], key=lambda x : x)
        answer.append(tmp[idx-1])
    
    return answer