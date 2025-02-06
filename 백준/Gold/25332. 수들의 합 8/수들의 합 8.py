def count_equal_sum_intervals(N, A, B):
    from collections import defaultdict
    
    # 차이 배열을 생성
    C = [A[i] - B[i] for i in range(N)]
    
    # 누적 합
    prefix_sum = 0
    count_map = defaultdict(int)
    
    # 초기값으로 prefix_sum = 0인 경우를 세어줌
    count_map[0] = 1
    result_count = 0
    
    for value in C:
        prefix_sum += value
        # 현재 prefix_sum이 몇 번 등장했는지 더해줌
        result_count += count_map[prefix_sum]
        # 현재 prefix_sum을 count_map에 추가
        count_map[prefix_sum] += 1

    return result_count

# 입력 처리
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# 결과 계산 및 출력
result = count_equal_sum_intervals(N, A, B)
print(result)
