N,M = map(int, input().split())
Chars = sorted(list(map(str, input().split())))

def count_a(res):
    ans = 0
    for _ in res:
        if _ in ['a','e','i','o','u']:
            ans += 1

    return ans

def dfs(seq, depth):
    if len(seq) == N :
        if count_a(seq) >= 1 and len(seq) - count_a(seq) >= 2:
            print(''.join(map(str, seq)))
        return

    if depth >= M:
        return

    dfs(seq+[Chars[depth]], depth + 1)
    dfs(seq, depth + 1)

dfs([], 0)



    
    

