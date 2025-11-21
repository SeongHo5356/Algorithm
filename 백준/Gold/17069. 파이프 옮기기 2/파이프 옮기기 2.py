import sys
input = sys.stdin.readline

N = int(input())
board = [list(map(int, input().split())) for _ in range(N)]

# DP[r][c][d] : (r,c)를 끝점으로 하고 d 방향일 때의 경우의 수
# 0 = 가로, 1 = 세로, 2 = 대각선
DP = [[[0] * 3 for _ in range(N)] for _ in range(N)]

# 초기 상태: (0,1) 가로 파이프
DP[0][1][0] = 1

for i in range(N):
    for j in range(2, N):  # j 는 최소 2부터 가능
        if board[i][j] == 1:
            continue  # 벽이면 아무 방향도 불가능

        # ---- 가로(0) 전이 ----
        # 이전 방향: 가로(0), 대각선(2) → 가로(0)
        if board[i][j-1] == 0:
            DP[i][j][0] = DP[i][j-1][0] + DP[i][j-1][2]

        # ---- 세로(1) 전이 ----
        # 이전 방향: 세로(1), 대각선(2) → 세로(1)
        if i > 0 and board[i-1][j] == 0:
            DP[i][j][1] = DP[i-1][j][1] + DP[i-1][j][2]

        # ---- 대각선(2) 전이 ----
        # 조건: board[i][j], board[i-1][j], board[i][j-1] 모두 0
        if (
            i > 0
            and board[i-1][j] == 0
            and board[i][j-1] == 0
        ):
            DP[i][j][2] = (
                DP[i-1][j-1][0] +
                DP[i-1][j-1][1] +
                DP[i-1][j-1][2]
            )

# 정답: (N-1,N-1)에 도착했을 때 모든 방향 합
print(sum(DP[N-1][N-1]))
