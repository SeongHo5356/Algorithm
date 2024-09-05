from itertools import combinations as cb
import sys

game = list(cb(range(6),2))
data = list(map(int,sys.stdin.readline.split()))
res = [data[i:i+3] for i in range(0,16,3)]
ans = 0

def dfs(round):
    if round == 15:
        ans = 1
        if 

    
