def min_tapes(N, L, leaks):
    leaks.sort()  # 물이 새는 위치를 오름차순으로 정렬
    count = 1
    end = leaks[0] + L - 0.5  # 첫 번째 테이프의 끝 위치

    for i in range(1, N):
        if leaks[i] > end:  # 다음 물이 새는 위치가 현재 테이프 범위를 벗어나면
            count += 1
            end = leaks[i] + L - 0.5

    return count

# 예제 입력
N, L = map(int, input().split())
leaks = list(map(int, input().split()))

# 풀이 및 출력
result = min_tapes(N, L, leaks)
print(result)