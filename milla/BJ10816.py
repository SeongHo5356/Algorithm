import sys
input = sys.stdin.readline

N = int(input())
n_lst = sorted(map(int, input().split()))
M = int(input())
m_lst = map(int, input().split())
print(n_lst)
print(m_lst)

def bnry_srch(el, cnt, start, end):
    while start <= end :
        mid = (start + end)//2    
        cnt += 1
        return

def bnry_srch(el, cnt, start, end):
    while start <= end:
        mid = (start + end) // 2
        if el == list[mid]:
            cnt += 1
            start = mid + 1
        elif el < list[mid]:
            start = mid + 1
            print("2")
        else :
            end = mid - 1
            print("3")
    return cnt

ans = []
for els in m_lst:
    ans.append(bnry_srch(els, n_lst))
print(*ans, sep = ' ')