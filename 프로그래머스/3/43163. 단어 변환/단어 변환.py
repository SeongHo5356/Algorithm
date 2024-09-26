import sys
sys.setrecursionlimit(10**6)

def cpr(a, b):
    cnt = 0
    if len(a) == len(b):
        for i in range(len(a)):
            if a[i] != b[i]:
                cnt += 1
                if cnt >= 2:
                    return False
        return cnt == 1
    else:
        return False

def solution(begin, target, words):
    if target not in words:
        return 0
    
    v = [0] * len(words)
    min_steps = [float('inf')]  # 전역 변수로 최소 단계 저장
    
    def dfs(begin, target, words, cnt):
        if begin == target:
            min_steps[0] = min(min_steps[0], cnt)
            return
        
        for i in range(len(words)):
            if cpr(words[i], begin) and v[i] == 0:
                v[i] = 1
                dfs(words[i], target, words, cnt + 1)
                v[i] = 0
    
    dfs(begin, target, words, 0)
    
    return min_steps[0] if min_steps[0] != float('inf') else 0
