def solution(board, h, w):
    answer = 0
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    color = board[h][w]
    for i in range(len(dx)):
        nx = h + dx[i]
        ny = w + dy[i]
        if 0 <= nx < len(board) and 0 <= ny < len(board):
            if board[nx][ny] == color:
                answer += 1
    return answer