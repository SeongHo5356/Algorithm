def solution(s):
    a = list(map(int, s.split()))
    Ma, Mi = min(a), max(a)
    ans = str(Ma) + " " + str(Mi)
    
    return ans