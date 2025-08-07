from itertools import combinations as cb

N,M = map(int, input().split())
Chars = sorted(list(map(str, input().split())))
tmp = list(cb(Chars, N))

def count_a(res):
    ans = 0
    for _ in res:
        if _ in ['a', 'e', 'i', 'o', 'u']:
            ans += 1
    return ans

for part in tmp:
    if count_a(part) >= 1 and N - count_a(part) >= 2:
        print(''.join(map(str, part)))