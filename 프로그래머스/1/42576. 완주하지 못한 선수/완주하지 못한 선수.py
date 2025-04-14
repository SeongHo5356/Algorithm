def solution2(participant, completion):
    participant.sort()
    completion.sort()
    answer = participant[-1]
    for i in range(len(completion)):
        if participant[i] != completion[i]:
            answer = participant[i]
            break
    return answer









def solution(participant, completion):
    participant.sort()
    completion.sort()
    for i in range(len(completion)):
        if completion[i] != participant[i]:
            return participant[i]
    
    return participant.pop()
            