import sys
import math

def find_sequence(n, k):
    if n == 1:
        if k != 0:
            print("Impossible")
            return
    else:
        if k < 0 or k > n - 1:
            print("Impossible")
            return

    A = [i for i in range(1, n + 1)]
    diff = (n - 1) - k

    for i in range(1, n):
        if diff == 0:
            break
        A[i - 1], A[i] = A[i], A[i - 1]
        diff -= 1

    print(' '.join(map(str, A)))

# 입력 받기
n, k = map(int, sys.stdin.readline().split())
find_sequence(n, k)
