def solution_2(numbers):
    answer = 0
    tmp = []
    for num in numbers :
        tmp.append(str(num))
    tmp.sort(key = lambda x : x*3,reverse = True)
    answer = str(int(''.join(tmp)))
    
    return answer

import itertools

def solution1(numbers):
    numbers = list(itertools.permutations(numbers, len(numbers)))
    max = 0
    for number in numbers:
        curr = int(''.join(map(str,number)))
        if max < curr: max = curr
    return str(max)
















def solution(numbers):
    answer = ""
    numbers_str = sorted(numbers, key=lambda x: str(x)*3, reverse=True)
    for number in numbers_str:
        answer += str(number)
        
    if answer[0] == "0":
        return "0"
    
    return answer