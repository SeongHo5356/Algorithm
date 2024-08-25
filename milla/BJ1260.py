import sys 

N, M, V = map(int, input().split())

def makeMatrix(N, M):
    doc = [0 for _ in range(N)]
    # basicMatrix = [doc for _ in range(N)]
    basicMatrix =[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]
    print(basicMatrix)
    
    for i in range(M):
        node1, node2 = map(int, input().split())
        print(basicMatrix[node1-1][node2-1])
        basicMatrix[node1-1][node2-1] = 1
        basicMatrix[node2-1][node1-1] = 1
        print(basicMatrix)
        
    return basicMatrix

a = makeMatrix(N,M)

print(a)
    


