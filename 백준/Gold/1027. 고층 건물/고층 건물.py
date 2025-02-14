import sys

N = int(sys.stdin.readline())

buildings = list(map(int, sys.stdin.readline().split()))
count = 0
INF = int(1e9)

for i in range(N):
    x1, y1 = i, buildings[i]
    cnt = 0
    prev = -INF

    for j in range(i + 1, N):
        x2, y2 = j, buildings[j]

        slope = (y2 - y1) / (x2 - x1)

        if slope > prev:
            cnt += 1
            prev = slope

    prev = INF
    
    for k in range(i - 1, -1, -1):
        x3, y3 = k, buildings[k]

        slope = (y1 - y3) / (x1 - x3)

        if slope < prev:
            cnt += 1
            prev = slope

    count = max(count, cnt)

print(count)