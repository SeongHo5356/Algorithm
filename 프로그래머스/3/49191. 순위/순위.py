def solution(n, results):
    board = [[0]*(n) for _ in range(n)]
    
    for w,l in results:
        board[w-1][l-1] = 1
        board[l-1][w-1] = -1
    
    for k in range(n): # 중간
        for i in range(n): # 시작
            for j in range(n): # 끝
                # 논리적으로 맞는것만 체크해야 하니까
                if board[i][k] == 1 and board[k][j] == 1:
                    board[i][j] = 1
                elif board[i][k] == -1 and board[k][j] == -1:
                    board[i][j] = -1
    cnt = 0
    for x in board:
        print(x)
        if x.count(0) == 1:
            cnt += 1
    return cnt