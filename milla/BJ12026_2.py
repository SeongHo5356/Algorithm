N = int(input())
road = input()
ans  = [1000 * 1000 + 1] * N
ans[0] = 0

for i in range(N):
    if road[i] == 'B':
        for k in range(i+1, N):
            if road[k] == 'O':
                ans[k] = min(ans[k], ans[i] + (k-i)*(k-i))

    if road[i] == 'O':
        for k in range(i+1, N):
            if road[k] == 'J':
                ans[k] = min(ans[k], ans[i] + (k-i)*(k-i))

    if road[i] == 'J':
        for k in range(i+1, N):
            if road[k] == 'B':
                ans[k] = min(ans[k], ans[i] + (k-i)*(k-i))

if ans[N-1] == (1000 * 1000 + 1):
    print(-1)
else:
    print(ans[N-1])

