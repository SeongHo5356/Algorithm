import sys

def check(sx, sy):
    target = map[sx][sy]

    for i in range(4):
        cnt, nx, ny = 1, sx + dx[i], sy + dy[i]

        while 0 <= nx < 19 and 0 <= ny < 19 and map[nx][ny] == target:
            cnt += 1

            if cnt == 5:
                if 0 <= sx - dx[i] < 19 and 0 <= sy - dy[i] < 19 and map[sx - dx[i]][sy - dy[i]] == target:
                    break
                if 0 <= nx + dx[i] < 19 and 0 <= ny + dy[i] < 19 and map[nx + dx[i]][ny + dy[i]] == target:
                    break

                print(target)
                print(sx + 1, sy + 1)
                exit(0)

            nx += dx[i]
            ny += dy[i]


input = sys.stdin.readline

map = [list(map(int, input().split())) for _ in range(19)]

dx = [0, 1, 1, -1]
dy = [1, 0, 1, 1]

for i in range(19):
    for j in range(19):
        if map[i][j] != 0:
            check(i, j)

print(0)





