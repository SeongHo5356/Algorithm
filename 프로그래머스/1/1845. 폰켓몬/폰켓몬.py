def solution1(nums):
    lngth = len(set(nums))
    if lngth >= len(nums)//2:
        answer = len(nums)//2
    else:
        answer = lngth

    return answer


















def solution(nums):
    nums.sort()
    ans = len(nums)//2
    cnt = 1
    for i in range(len(nums)-1):
        if nums[i] != nums[i+1]:
            cnt+=1
            
    if cnt <= ans:
        return cnt
    else :
        return ans