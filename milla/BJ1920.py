import sys
input = sys.stdin.readline

N = int(input())
n_lst = sorted(list(map(int, input().split())))
M = int(input())
m_lst = list(map(int, input().split()))

def bnry_srch(a):
    start, end = 0, len(n_lst)-1
    while start <= end :
        mid = (start + end) // 2
        
        if a == n_lst[mid]:
            return 1 
        
        elif a > n_lst[mid]: 
            start = mid + 1

        elif a < n_lst[mid]:
            end = mid -1

    return 0

        

for m in m_lst:
    ans = bnry_srch(m)
    print(ans)
    
        