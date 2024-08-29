import sys
input = sys.stdin.readline

ls, ld = map(int, input().split())

## BFS 사용
def bfs(si, ei):
    q = []
    v = [0]*200001
    q.append(si)
    v[si] = 1
    
    while q:
        ci = q.pop(0)
        if ci == ei:
            return v[ci] - 1
         
        for di in [ci-1, ci+1,ci*2]:
            if 0<=di<=200000 and v[di] == 0:
                v[di] = v[ci] + 1
                q.append(di) 
    return -1

print(bfs(ls, ld))
                

