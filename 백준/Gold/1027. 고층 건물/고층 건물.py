a=int(input())
height=list(map(int,input().split()))
sight=[0  for _ in range(a)]
for i in range(a-1):
    maxp = float("-inf")
    minp = float("-inf")
    for j in range(i+1,a):
        pivot=(height[j]-height[i])/(j-i)
        if pivot>=0.0:
            if pivot>maxp:
                sight[i]+=1
                sight[j]+=1
                maxp=pivot
        if pivot<0.0:
            if pivot>minp:
                if maxp<0:
                    sight[i] += 1
                    sight[j] += 1
                    minp = pivot
print(max(sight))