import sys; input = sys.stdin.readline

def is_visible(i, j):
    slope = (lst[j] - lst[i]) / (j - i)
    y_intercept = lst[i] - i * slope

    for k in range(i + 1, j):
        if slope * k + y_intercept <= lst[k]:
            return False

    return True


N = int(input())
lst = list(map(int, input().split()))

count = [0] * N

for i in range(N - 1):
    for j in range(i + 1, N):
        if is_visible(i, j):
            count[i] += 1
            count[j] += 1

print(max(count))