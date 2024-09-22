# def solution(n, 검사관리스트):
#     tlst = [0]*len(검사관리스트)
#     for i in range(n):
#         for j in range(len(검사관리스트)):
#             tlst[j] += 검사관리스트[j]
        
#         print("tlst " , tlst)
#         minNum = min(tlst)
#         minIndex = tlst.index(minNum)
        
#         if i != n-1:
#             for k in range(len(검사관리스트)):
#                 if k != minIndex :
#                     tlst[k]-=검사관리스트[k]
#             print("tlst2 " , tlst)
#             print()

#     return min(tlst)

# print(solution(6, [7,10]))

# def solution(n, times):
#     tlst = [0]*len(times)
#     ans = 0     
#     for i in range(n):
#         min_idx = 0
#         for j in range(1, len(times)):
#             if tlst[j] + times[j] < tlst[min_idx] + times[min_idx]:
#                 min_idx = j

#         tlst[min_idx] += times[min_idx]
#         ans = tlst[min_idx]
    
#     return ans

def solution(m, times):
    start = 1 
    end = min(times) * m
    
    while start <= end :
        mid = (start + end) // 2
        cnt = 0
        for time in times :
            cnt += mid // time 

        if cnt < m:
            start = mid + 1
        else :
            end = mid - 1

    return start 