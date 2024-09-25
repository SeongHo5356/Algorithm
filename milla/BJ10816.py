# import sys
# input = sys.stdin.readline

# N = int(input())
# n_lst = sorted(list(map(int, input().split())))
# M = int(input())
# m_lst = list(map(int, input().split()))

# def bnry_srch(element):
#     cnt = 0
#     start, end = 0, len(n_lst)-1
#     while start <= end:
#         mid = (start + end) // 2   
#         if element <= n_lst[mid]:   
#             if element == n_lst[mid]:
#                 cnt += 1
#                 print("cnt :" , cnt)
#             end = mid - 1
#         else :
#             start = mid + 1
#     return cnt

# ans = []
# for els in m_lst:
#     ans.append(bnry_srch(els))
# print(*ans, sep = ' ')

from collections import Counter
from sys import stdin

N = int(input())
n_lst = sorted(list(map(int, input().split())))
M = int(input())
m_lst = list(map(int, input().split()))

count = Counter(n_lst)
print(count)       # Counter({10: 3, -10: 2, 3: 2, 2: 1, 6: 1, 7: 1})
print(type(count)) # <class 'collections.Counter'>

for m in m_lst:
    if m in count:
        print(count[m], end = ' ')
    else:
        print(0, end = ' ')