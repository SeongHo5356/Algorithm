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

def solution_1(begin, target, words):
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


from collections import deque

def solution_bfs(begin, target, words):
    if target not in words:
        return 0
    
    q = deque()
    q.append([begin, 0])
    
    while q:
        now, step = q.popleft()
        
        if now == target:
            return step
    
        else :
            for word in words: 
                count = 0
                for i in range(len(word)):
                    if word[i] != now[i]:
                        count += 1
                if count == 1:
                    q.append([word, step + 1])
    return 0
                 
def solution_1016(begin, target, words):
    if target not in words:
        return 0
    
    queue = deque()
    queue.append([begin, 0])
    
    while queue:
        cur, cnt = queue.popleft()
        
        if cur == target:
            return cnt
        
        else:
            for word in words:
                sim = 0
                for i in range(len(word)):
                    if cur[i] != word[i]:
                        sim += 1
                if sim == 1:
                    queue.append([word, cnt + 1])
    return 0

def transPossibility(subject, object):
    cnt = 0 
    for i in range(len(subject)):
        if subject[i] != object[i]:
            cnt += 1
    if cnt == 1:
        return True
    else:
        return False
    
def solution_1107(begin, target, words):
    if target not in words:
        return 0
    
    queue = deque()
    queue.append([begin, 0])
    while queue:
        cur, cnt = queue.popleft()
        
        if cur == target:
            return cnt
        
        for word in words:
            if transPossibility(word, cur):
                queue.append([word, cnt + 1])
    return 0

def solution(begin, target, words):
    if target not in words:
        return 0
    
    queue = deque()
    queue.append([begin, 0])
    
    while queue:
        cur = queue.popleft()   
        if cur[0] == target:
            return cur[1]
        
        for word in words:
            if transPossibility(cur[0], word):
                queue.append([word ,cur[1] + 1])
        
        