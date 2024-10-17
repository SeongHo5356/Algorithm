def min_tape_count(n, l, leak_positions):
    # 물이 새는 위치들을 오름차순으로 정렬
    leak_positions.sort()
    
    # 필요한 테이프의 개수
    tape_count = 0
    # 현재 테이프가 덮을 수 있는 마지막 위치
    current_end = 0

    for leak in leak_positions:
        # 만약 현재 위치가 현재 테이프가 덮을 수 있는 범위 밖이면, 새로운 테이프 필요
        if leak > current_end:
            # 새로운 테이프를 붙이고, 그 테이프가 덮는 범위 계산
            tape_count += 1
            current_end = leak - 0.5 + l
    
    return tape_count

# 입력 받기
n, l = map(int, input().split())
leak_positions = list(map(int, input().split()))

# 결과 출력
print(min_tape_count(n, l, leak_positions))
