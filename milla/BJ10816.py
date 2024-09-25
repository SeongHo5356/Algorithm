import sys
input = sys.stdin.readline

N = int(input())
n_lst = sorted(list(map(int, input().split())))
M = int(input())
m_lst = list(map(int, input().split()))

def bnry_srch(el, n_lst):
    start = 0
    end = len(n_lst)
    cnt = 0
    while start <= end:
        mid = (start + end) // 2
        if el <= list[mid]:
            cnt += 1
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