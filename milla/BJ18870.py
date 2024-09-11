N = int(input())
t_lst = list(map(int, input().split()))
x_lst = sorted(list(set(t_lst)))

ans = []
# 중복을 제거하고입력받는 과정을 추가해야함

def bnry_srh(a):
    start, end = 0, len(x_lst)-1
    ans = 0
    while start <= end:
        mid = (start + end)//2
        if x_lst[mid] >= a: #[-10 -9 2 4 4], 2>=4
            ans = mid
            end = mid - 1
        else :
            start = mid + 1
    return ans

for x in t_lst:
    ans.append(bnry_srh(x))

print(*ans) 