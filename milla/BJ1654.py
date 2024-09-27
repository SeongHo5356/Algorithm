import sys 
input = sys.stdin.readline

K, N = map(int, input().split())
lines = [int(input()) for _ in range(K)]
max_line_length = max(lines)

def shares(a, lines):
    sum = 0
    for line in lines:
        sum += line//a
    return sum

def bnry_search(lines):
    start, end = 0, max_line_length
    ans = 0
    while start <= end:
        mid = (start + end)//2
        # 만약에 자른 나무 수가 원하는 수보다 작다면
        # 더 작게 자름
        temp = shares(mid, lines)
        if temp >= N:
            ans = mid
            start = mid + 1
        # 반대의 경우
        # 더 크게 자름
        else:
            end = mid - 1
    return ans

a = bnry_search(lines)
print(a)
