import sys 
input = sys.stdin.readline

N, M, V = map(int, input().split())

# basicMatrix = [[0]*N for _ in range(N)]
def makeMatrix(N, M):
<<<<<<< HEAD

    # basicMatrix = [doc for _ in range(N)]
    basicMatrix =[]
    for i in range(N):
        basicMatrix.append([0 for j in range(N)])

=======
    # doc = [0 for _ in range(N)]
    # basicMatrix = [doc for _ in range(N)]
    visited = [0 for i in range(N)]
    basicMatrix =[[0]*N for _ in range(N)]
>>>>>>> b9a237358f007d6506dddb1c76cce111c9a41878
    
    for i in range(M):
        node1, node2 = map(int, input().split())
        basicMatrix[node1-1][node2-1] = 1
        basicMatrix[node2-1][node1-1] = 1
        
    return basicMatrix, visited

<<<<<<< HEAD
makeMatrix(N, M)

=======

def dfs(basicMatrix, visited, V):
    visited[V-1] = 1
    print(V, end = ' ')
    
    for i in range(len(visited)):
        if visited[i] == 0 and basicMatrix[V-1][i] == 1:
            dfs(basicMatrix, visited, i+1)
    
    
def bfs(basicMatrix, visited, V):
    q = []    
    q.append(V)
    visited[V-1] = 1
    while q:
        out = q.pop(0)
        print(out , end = ' ')
        for i in range(len(basicMatrix[out-1])):
            if basicMatrix[out-1][i] == 1 and visited[i] == 0:
                q.append(i + 1)
                visited[i] = 1 
                
>>>>>>> b9a237358f007d6506dddb1c76cce111c9a41878


basicMatrix, visited = makeMatrix(N, M)
dfs(basicMatrix, visited, V)
visited = [0 for i in range(N)]
print()
bfs(basicMatrix, visited, V)