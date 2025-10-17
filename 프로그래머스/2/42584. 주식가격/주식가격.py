def solution_1016(prices):
    answer = []
    for i in range(len(prices)):
        cnt = 0
        for k in range(len(prices)-(i+1)):   # i=0. range(5-1), # i=1. range(5-2)
            cnt += 1
            if prices[i] > prices[k+i+1]:
                break
        answer.append(cnt)
    return answer


def solution(prices):
    length = len(prices)
    solution = [0] * length
    for i in range(length):
        for j in range(i+1, length):
            solution[i] += 1
            if prices[i] > prices[j]:
                break
    return solution












