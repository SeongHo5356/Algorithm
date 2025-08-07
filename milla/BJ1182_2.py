N, S = map(int, input().split())
Nums = list(map(int, input().split()))

def dfs(seq, depth):
    if depth == N:
        return 1 if seq and sum(seq) == S else 0

    # 1) Nums[depth]를 선택하는 경우 → 새 리스트 생성
    count_with = dfs(seq + [Nums[depth]], depth + 1)
    # 2) 선택하지 않는 경우 → 기존 seq 그대로
    count_without = dfs(seq, depth + 1)

    return count_with + count_without

print(dfs([], 0))
