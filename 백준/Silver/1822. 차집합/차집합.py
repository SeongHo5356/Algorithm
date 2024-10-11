def set_difference():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    # 첫째 줄 입력 처리
    nA, nB = map(int, data[0].split())
    
    # 집합 A, B 입력 처리
    A = list(map(int, data[1].split()))
    B = set(map(int, data[2].split()))  # B는 집합으로 변환
    
    # 차집합 계산
    result = sorted([x for x in A if x not in B])
    
    # 결과 출력
    print(len(result))
    if result:
        print(" ".join(map(str, result)))

# 함수 실행
set_difference()
