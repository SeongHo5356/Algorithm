from collections import deque    

def findMax(num, docList):
    max = 0
    index = 0 
    
    for i in range(len(docList)):
        if max < docList[i] :
            max = docList[i]
            index = i
    
    return max, index 
    
n = input()
docNum, docIndex = map(int, input().split())
docList = deque([int(x) for x in range(docNum)])
count = 1



