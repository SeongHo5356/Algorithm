from itertools import combinations

N = int(input())

answer = []
for i in range(1,11):
    for combination in combinations(range(10), i):
        num = sorted(list(combination), reverse = True)
        answer.append(int("".join(map(str, num))))

answer.sort()
print(answer[N] if len(answer) > N else -1 )
