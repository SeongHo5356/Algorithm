import sys

input = sys.stdin.readline

N = int(input())

board = [list(input().strip()) for _ in range(N)]

# def quad(cx, cy, size):
#     head = board[cx][cy]
#     is_same = True
#     for i in range(cx, cx + size):
#         for j in range(cy, cy + size):
#             if board[i][j] != head:
#                 is_same = False
#                 break
#         if not is_same:
#             break
#
#     if is_same:
#         return head
#
#     half = size // 2
#     return "(" + \
#         quad(cx, cy, half) + \
#         quad(cx, cy + half, half) + \
#         quad(cx + half, cy, half) + \
#         quad(cx + half, cy + half, half) + \
#         ")"
#
# print(quad(0,0,N))

def quad(x,y,size):
    head = board[x][y]
    is_same = True
    for i in range(x, x+size):
        for j in range(y, y+size):
            if board[i][j] != head:
                is_same = False
                break
        if not is_same:
            break

    if is_same:
        return head

    half = size // 2
    return "(" + \
        quad(x,y,half) + \
        quad(x, y + half, half) + \
        quad(x + half, y, half) + \
        quad(x + half, y + half, half) + \
        ")"

print(quad(0,0,N))

