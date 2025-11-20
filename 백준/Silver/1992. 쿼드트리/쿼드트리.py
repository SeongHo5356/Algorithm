
import sys
input = sys.stdin.readline

N = int(input())
board = [list(input().strip()) for _ in range(N)]   # 문자열로 저장

def quad(cx, cy, size):
    head = board[cx][cy]
    is_same = True
    for i in range(cx, cx + size):
        for j in range(cy, cy + size):
            if board[i][j] != head:
                is_same = False
                break
        if not is_same:
            break

    if is_same:
        return head

    half = size // 2
    return "(" + \
        quad(cx, cy, half) + \
        quad(cx, cy + half, half) + \
        quad(cx + half, cy, half) + \
        quad(cx + half, cy + half, half) + \
        ")"

print(quad(0,0,N))





