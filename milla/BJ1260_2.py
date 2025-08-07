import sys
input = sys.stdin.readline

N,M,V = map(int, input().split())
Graph = [[0] * (N+1) for _ in range(N+1)]
Visited = [0] * (N+1)

for i in range(M):
    dx, dy = map(int, input().split())
    Graph[dy][dx] = 1
    Graph[dx][dy] = 1

def bfs(N, V, Graph, Visited):
    q = [V]
    Visited[V] = 1
    while q:
        cur = q.pop(0)
        print(cur, end = ' ')
        for i in range(1, N+1):
            if (Graph[cur][i] == 1 and Visited[i] != 1):
                q.append(i)
                Visited[i] = 1


def dfs(N, V, Graph, Visited):
    Visited[V] = 1
    print(V, end = ' ')

    for i in range(1, N + 1):
        if Visited[i] == 0 and Graph[V][i] == 1:
            dfs(N, i, Graph, Visited)


dfs(N, V, Graph, Visited[:])
print()
bfs(N, V, Graph, Visited[:])
