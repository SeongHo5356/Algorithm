def solution(arr):
    answer = []
    for i in range(len(arr)):
        if [arr[i]] != arr[i + 1: i + 2]:
            answer.append(arr[i])
    return answer