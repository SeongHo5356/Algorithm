import sys 

N, M, V = map(int, input().split())

def makeMatrix(N, M):

    # basicMatrix = [doc for _ in range(N)]
    basicMatrix =[]
    for i in range(N):
        basicMatrix.append([0 for j in range(N)])

    
    for i in range(M):
        node1, node2 = map(int, input().split())
        print(basicMatrix[node1-1][node2-1])
        basicMatrix[node1-1][node2-1] = 1
        basicMatrix[node2-1][node1-1] = 1
        print(basicMatrix)
        
    return basicMatrix

makeMatrix(N, M)



