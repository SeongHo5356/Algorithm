def solution(prices):
    answer = []
    for i in range(len(prices)):
        cnt = 0
        for k in range(len(prices)-(i+1)):   # i=0. range(5-1), # i=1. range(5-2)
            if prices[i] <= prices[k+i+1]:
                cnt += 1
        answer.append(cnt)
    return answer