def solution(numbers, target):
    ans = 0
    leaves = [0]
    for number in numbers:
        tmp = []
        for parent in leaves:
            tmp.append(parent + number)
            tmp.append(parent - number)
        leaves = tmp
        
    for leave in leaves:
        if leave == target:
           ans += 1
    return ans 