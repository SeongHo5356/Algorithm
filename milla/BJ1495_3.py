N,S,M = map(int, input().split())
volumes = list(map(int, input().split()))
q = [S]

for i in range(N):
    temp = []
    for item in q:
        if item + volumes[i] <= M :
            temp.append(item + volumes[i])
        if item - volumes[i] >= 0 :
            temp.append(item - volumes[i])
    q = temp

if len(q) == 0:
    print(-1)
else :
    print(max(q))
