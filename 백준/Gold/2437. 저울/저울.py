N = int(input())
weights = list(map(int, input().split()))
weights.sort()

target = 1
for w in weights:
    if w > target:
        break
    target += w

print(target)
