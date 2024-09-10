import sys
input = sys.stdin.readline

N,M = map(int, input().split())
woods = list(map(int, input().split()))
mx_wood_length = max(woods)
lengths = [0]*mx_wood_length

def cut_woods(a, woods):
    sum = 0
    for wood in woods:
        
        if wood - a <= 0:
            continue
        else :
            sum += (wood - a) 

    return sum

def bnry_srch(mx_wood_length, woods, M):
    start, end = 0, mx_wood_length - 1
    mid = 0
    while start <= end:
        previous_mid = 0
        mid = (start + end)//2
        print("mid :",mid)
        ans = cut_woods(mid, woods)
        print("ans :", ans)
        if ans == M:
            return 
        
        elif ans < M:
            previous_mid = mid
            start = mid + 1
        elif ans > M:
            previous_mid = mid 
            end = mid - 1


    return mid
        
print(bnry_srch(mx_wood_length, woods, M))