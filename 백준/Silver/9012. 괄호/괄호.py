n = int(input())

while n > 0 :
    a = input()
    PTList = []
    b = True

    for _ in a:
        if _ == "(" :
            PTList.append("(")
        else :
            if len(PTList) == 0:
                print("NO")
                b = False
                break
            else : 
                PTList.pop()
                
    if len(PTList) > 0:
        print("NO")
    elif (b == True):
        print("YES")
        
    n -= 1
            