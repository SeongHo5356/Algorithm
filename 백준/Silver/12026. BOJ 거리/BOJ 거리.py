N = int(input())
road = input()

ans = [1000 * 1000 + 1] * N
ans[0] = 0
for i in range(len(road)):
    if road[i] == 'B':
        for j in range(0, i):
            if road[j] == 'J':
                ans[i] = min(ans[i], (i-j)*(i-j)+ans[j])
                
    elif road[i] == "O":
        for j in range(0, i):
            if road[j] == 'B':
                ans[i] = min(ans[i], (i-j)*(i-j)+ans[j])
        
    elif road[i] == "J":
        for j in range(0, i):
            if road[j] == 'O':
                ans[i] = min(ans[i], (i-j)*(i-j)+ans[j])

if ans[N-1] == (1000*1000)+1:
    print(-1)
else:
    print(ans[N-1])
            
