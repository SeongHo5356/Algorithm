def find_smallest_unmeasurable_weight(n, weights):
    # 추의 무게들을 오름차순으로 정렬
    weights.sort()
    
    # 측정할 수 있는 무게의 최대값 범위 초기화
    target = 1
    
    # 추들을 하나씩 확인하면서 처리
    for weight in weights:
        # 현재 추의 무게가 측정 가능한 범위를 넘어서면 그 무게는 만들 수 없다.
        if weight > target:
            break
        # 현재 추를 더해 측정 가능한 범위를 확장
        target += weight
    
    return target

# 입력 받기
n = int(input())
weights = list(map(int, input().split()))

# 결과 출력
print(find_smallest_unmeasurable_weight(n, weights))
