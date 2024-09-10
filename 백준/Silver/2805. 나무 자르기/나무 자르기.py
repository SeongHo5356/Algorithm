import sys
input = sys.stdin.readline

N,M = map(int, input().split())
woods = list(map(int, input().split()))
mx_wood_length = max(woods)

def cut_woods(a, woods):
    sum = 0
    for wood in woods:
        
        if wood - a <= 0:
            continue
        else :
            
            sum += (wood - a) 

    return sum

def bnry_srch(woods, M):
    start, end = 0, mx_wood_length
    result = 0
    while start <= end:
        mid = (start + end)//2
        if cut_woods(mid, woods) >= M:
            result = mid
            start = mid + 1
        else:
            end = mid - 1

    return result

정답 = bnry_srch(woods, M)
print(정답)

