# from itertools import combinations as cb
# import sys
# input = sys.stdin.readline

# N, M = map(int, input().split())

# cb_list = list(cb(range(1,N+1),M))

# for cb in cb_list:
#     print(*cb)

import sys

input = sys.stdin.readline

N,M = map(int, input().split())
ans = []

def dfs(n, tlst, s):
    if n == M :
        ans.append(tlst)
        return
    
    for i in range(s, N+1):
        dfs(n+1, tlst+[i], i+1)


dfs(0, [], 1)
for an in ans:
    print(*an)