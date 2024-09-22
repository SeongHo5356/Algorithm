def solution(sizes):
    answer = 0
    ans_col, ans_row = 0,0
    for size in sizes:
        size = sorted(size)
        col, row = size[0], size[1]
        if col > ans_col: 
            ans_col = col
        if row > ans_row:
            ans_row = row
    answer = ans_row * ans_col
    return answer