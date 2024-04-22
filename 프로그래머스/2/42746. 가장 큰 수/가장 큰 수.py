def solution(numbers):
    answer = 0
    tmp = []
    for num in numbers :
        tmp.append(str(num))
    tmp.sort(key = lambda x : x*3,reverse = True)
    answer = str(int(''.join(tmp)))
    
    return answer