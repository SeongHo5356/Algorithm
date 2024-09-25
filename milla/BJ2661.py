def back_tracking(idx):
    #1
    for i in range(1,(idx//2) +1):
        print(s)
        print("1. " , s[-i:])
        print("2. " , s[-2 * i:-i])
        print()
        if s[-i:] == s[-2 * i:-i]: 
            print("안좋은 순열")
            return -1
    
    if idx == n:
        for i in range(n):
            print(s[i], end='')
        return 0

    #3
    for i in range(1, 4):
        s.append(i)
        if back_tracking(idx + 1) == 0:
            return 0
        s.pop()

n = int(input())
s = []
back_tracking(0)