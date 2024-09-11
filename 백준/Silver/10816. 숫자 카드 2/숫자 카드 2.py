from collections import Counter
from sys import stdin

N = int(input())
n_lst = sorted(list(map(int, input().split())))
M = int(input())
m_lst = list(map(int, input().split()))

count = Counter(n_lst)

for m in m_lst:
    if m in count:
        print(count[m], end = ' ')
    else:
        print(0, end = ' ')