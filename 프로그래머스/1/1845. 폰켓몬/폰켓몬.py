from collections import Counter

def solution(nums):
    num_counts = Counter(nums)
    distinct_nums = len(num_counts)
    return min(distinct_nums,len(nums)//2)