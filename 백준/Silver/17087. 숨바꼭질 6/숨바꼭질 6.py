import sys
import math

def compute_gcd(numbers):
    gcd_value = numbers[0]
    for num in numbers[1:]:
        gcd_value = math.gcd(gcd_value, num)
    return gcd_value

# 입력 받기
N, S = map(int, sys.stdin.readline().split())
positions = list(map(int, sys.stdin.readline().split()))

# 각 동생의 위치와 수빈이의 위치의 차이의 절댓값 계산
differences = [abs(pos - S) for pos in positions]

# 차이들의 최대 공약수 계산
if N == 1:
    result = differences[0]
else:
    result = compute_gcd(differences)

print(result)
