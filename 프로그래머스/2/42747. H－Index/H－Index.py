 

def solution(citations):
    answer = 0
    citations.sort(reverse=True)
    
    for i in range(len(citations)):              # H_index가 존재하고 H_index를 넘는 논문이 몇 개인지 구할때
        if(citations[i] < i+1):
            return i

    return len(citations) 