def solution_bfs(numbers, target):
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

def solution(numbers, target):
    return dfs(numbers, target, 0)

def dfs(numbers ,target, depth):
    ans = 0
    if depth == len(numbers):
        if sum(numbers) == target:
            return 1
        else:
            return 0
    else:
        ans += dfs(numbers, target, depth+1)
        numbers[depth] *= -1
        ans += dfs(numbers, target, depth+1)
        
    return ans