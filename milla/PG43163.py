import sys
sys.setrecursionlimit(10**6)

#  1개 요소빼고 다 같은 지 확인하는 함수
def cpr(a,b):
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
    ans = 0
    v = [0]*len(words)
    
    def dfs(begin, target, words, cnt):
        if begin == target:
            print("b:{},t:{},c:{}".format(begin, target, cnt))
            
    
        for i in range(len(words)):
            print(begin, words[i])
            print(cpr(words[i], begin) and v[i]==0)
            print(v)
            if cpr(words[i], begin) and v[i] == 0:
                v[i] = 1
                #print(begin, words[i])
                #print(v)
                begin = words[i]
                print("begin : {}, cnt : {}".format(begin, cnt))
                dfs(begin, target, words, cnt+1)
                v[i] = 0
        
        return cnt
    
    dfs(begin,target,words,0)
    
    return ans

solution("hit","cog",["hot", "dot", "dog", "lot", "log", "cog"])    #4
# solution("hit","cog",["hot", "dot", "dog", "lot", "log"])         #0