import sys
sys.setrecursionlimit(10**7)

N = int(sys.stdin.readline())

def hanoi(n, start, end):
    if n == 1:
        print(start, end)
        return 
    hanoi(n-1, start, 6-end-start)
    print(start, end)
    hanoi(n-1, 6-end-start, end)

print(2**N - 1)

if N <= 20:
    hanoi(N, 1, 3)