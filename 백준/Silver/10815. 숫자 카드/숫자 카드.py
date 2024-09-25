from sys import stdin
input = stdin.readline

N = int(input())
n_lst = sorted(list(map(int, input().split())))

M = int(input())
m_lst = list(map(int, input().split()))

# for m in m_lst:
#     check = 0
#     for n in n_lst:
#         if m == n :
#             check = 1
#             break
        
#     if check == 1:
#         print("1", end = ' ')
#     else :
#         print("0", end = ' ')
    
def bnry_srch(a):
    start, end = 0, len(n_lst)-1
    while start <= end:
        mid = (start + end) //2 
        if n_lst[mid] <= a:
            if n_lst[mid] == a:
                return 1
            start = mid + 1
        else :
            end = mid - 1
    return 0

for m in m_lst:
    print(bnry_srch(m) , end =' ')
    

