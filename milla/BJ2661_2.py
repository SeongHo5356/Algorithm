N = int(input())
ans = []
def check(num):
    for i in range(1, len(num)//2+1):
        if num[-i:] == num[-i*2:-i]:
            return False
    return True

def dfs(num):
    if len(num) == N and check(num) == True:
        print(num)
        return True

    for char in ['1', '2', '3']:
        if check(num + char):
            if dfs(num+char):
                return True
    return False


dfs('')

