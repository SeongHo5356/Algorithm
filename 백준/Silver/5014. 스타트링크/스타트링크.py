from collections import deque

def bfs(F, S, G, U, D):
    queue = deque([(S, 0)])  # (현재 층, 버튼 클릭 횟수)
    visited = [False] * (F + 1)  # 방문한 층 체크
    visited[S] = True

    while queue:
        current_floor, clicks = queue.popleft()

        if current_floor == G:
            return clicks

        up_floor = current_floor + U
        down_floor = current_floor - D

        if up_floor <= F and not visited[up_floor]:
            queue.append((up_floor, clicks + 1))
            visited[up_floor] = True

        if down_floor >= 1 and not visited[down_floor]:
            queue.append((down_floor, clicks + 1))
            visited[down_floor] = True

    return "use the stairs"

# 입력 받기
F, S, G, U, D = map(int, input().split())

# 결과 출력
result = bfs(F, S, G, U, D)
print(result)