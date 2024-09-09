from itertools import combinations as cb
import sys
input = sys.stdin.readline

N, M = map(int, input().split())

cb_list = list(cb(range(1,N+1),M))

for cb in cb_list:
    print(*cb)
