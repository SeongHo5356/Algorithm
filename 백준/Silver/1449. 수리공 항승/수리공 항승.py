N, L = map(int, input().split())
positions = list(map(int, input().split()))
positions.sort()

count = 0  # 필요한 테이프의 개수
i = 0  # 현재 위치

while i < N:
    # 현재 누수 지점의 시작 위치
    start = positions[i] - 0.5
    # 테이프가 덮는 끝 위치
    coverage_end = start + L
    count += 1  # 테이프 사용
    i += 1
    # 테이프가 덮을 수 있는 누수 지점은 모두 스킵
    while i < N and positions[i] - 0.5 < coverage_end:
        i += 1

print(count)
