import sys
input = sys.stdin.readline

N = int(input())
n_lst = sorted(map(int, input().split()))
M = int(input())
m_lst = map(int, input().split())

def bnry_srch(a, lst):
    start, end = 0, len(lst)-1
    while start <= end :
        
        mid = (start + end) // 2

        if a == lst[mid]:
            return 1 
          
        elif a > lst[mid]: 
            start = mid + 1

        elif a < lst[mid]:
            end = mid -1

    return 0

        

for el in m_lst:
    ans = bnry_srch(el, n_lst)
    print(ans)