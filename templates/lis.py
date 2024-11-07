def lengthOfLIS(nums) -> int:
    n = len(nums)
    dp = [1 for _ in range(n+1)]

    for i in range(1, n):
        for j in range(i):
            if nums[j] < nums[i] and dp[i] < dp[j] + 1:
                dp[i] = 1 + dp[j]

    return max(dp)
