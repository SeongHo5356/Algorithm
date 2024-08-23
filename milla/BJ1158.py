from collections import deque

N, K = map(int, input().split())

circle = deque()
answer = []

for i in range(N):
    circle.append(i+1)

while circle:
    circle.rotate(1-K)
    popNum = circle.popleft()
    answer.append(popNum)

print(str(answer).replace('[', '<').replace(']', '>'))

