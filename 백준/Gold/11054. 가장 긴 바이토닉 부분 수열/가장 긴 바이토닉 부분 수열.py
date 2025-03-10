def longest_bitonic_subsequence(n, A):
    # Step 1: Calculate LIS for each element
    lis = [1] * n
    for i in range(n):
        for j in range(i):
            if A[j] < A[i]:
                lis[i] = max(lis[i], lis[j] + 1)

    # Step 2: Calculate LDS for each element
    lds = [1] * n
    for i in range(n-1, -1, -1):
        for j in range(n-1, i, -1):
            if A[j] < A[i]:
                lds[i] = max(lds[i], lds[j] + 1)

    # Step 3: Combine LIS and LDS to find the longest bitonic subsequence
    max_length = 0
    for i in range(n):
        max_length = max(max_length, lis[i] + lds[i] - 1)

    return max_length

# Read input
n = int(input())
A = list(map(int, input().split()))

# Compute and print the result
result = longest_bitonic_subsequence(n, A)
print(result)
