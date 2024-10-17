import sys
sys.setrecursionlimit(200000)

def dfs(graph, start, target, visited):
    if start == target:
        return True
    visited.add(start)
    for neighbor in graph.get(start, []):
        if neighbor not in visited:
            if dfs(graph, neighbor, target, visited):
                return True
    return False

# 입력 처리
N = int(input())

graph = {}
for _ in range(N - 1):
    child, parent = input().split()
    
    # 부모가 그래프에 없다면 빈 리스트로 초기화
    if parent not in graph:
        graph[parent] = []
    
    # 부모-자식 관계 추가
    graph[parent].append(child)

# 검사할 두 클래스 입력
class1, class2 = input().split()

# DFS로 두 클래스가 서로 연결되어 있는지 확인
visited1, visited2 = set(), set()

can_cast = dfs(graph, class1, class2, visited1) or dfs(graph, class2, class1, visited2)

# 결과 출력
if can_cast:
    print(1)
else:
    print(0)
