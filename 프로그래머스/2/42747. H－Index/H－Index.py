 

def solution_2(citations):
    answer = 0
    citations.sort(reverse=True)
    
    for i in range(len(citations)):              # H_index가 존재하고 H_index를 넘는 논문이 몇 개인지 구할때
        if(citations[i] < i+1):
            return i

    return len(citations) 

def solution_3(citations):
    mx = max(citations)
    ans = 0
    for i in range(1, mx+1):
        H_idx = 0
        for citation in citations:
            if citation >= i:
                H_idx += 1
        if H_idx == i:
            if ans <= H_idx:
                ans = H_idx
        
    return ans

def solution(citations):
    citations.sort(reverse=True)
    for i, citation in enumerate(citations, 1):
        if citation < i:
            return i - 1
    return len(citations)