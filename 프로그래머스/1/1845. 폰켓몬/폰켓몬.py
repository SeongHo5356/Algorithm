def solution(nums):
    lngth = len(set(nums))
    if lngth >= len(nums)//2:
        answer = len(nums)//2
    else:
        answer = lngth

    return answer