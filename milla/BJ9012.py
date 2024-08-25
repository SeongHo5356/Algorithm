n = int(input())

while n > 0 :
    a = input()
    PTList = [];

    for _ in a:
        if _ == "(" :
            PTList.append("(")
        else :
            if len(PTList) == 0:
                print("NO")
            else : 
                PTList.pop()
                
    if len(PTList) > 0:
        print("NO")
    else :
        print("YES")
        
    n -= 1
            