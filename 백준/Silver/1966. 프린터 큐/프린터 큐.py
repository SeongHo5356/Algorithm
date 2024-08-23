import sys
from collections import deque

def printOrder(findDocIndex, docs):
    result = 0

    while docs :
        if docs[0] < max(docs):
            docs.append(docs.popleft())
            if findDocIndex == 0 :
                findDocIndex = len(docs) - 1
            else :
                findDocIndex -= 1
        
        else :
            docs.popleft()
            result += 1
            if findDocIndex == 0 :
                break
            else :
                findDocIndex -= 1

    return result

n = int(sys.stdin.readline())

for _ in range(n):
    docNum, findDocIndex = map(int, input().split())
    docs = deque([int(x) for x in input().split()])
    print(printOrder(findDocIndex, docs))