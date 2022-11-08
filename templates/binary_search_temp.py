from typing import List

# If the target exists, returns its leftmost index.
# Else, returns the index of where it should be.
def binarySearch(nums: List[int], target: int) -> int:
    l, r = 0, len(nums)
    while l < r :
        m = (l + r) // 2
        if nums[m] < target:
            l = m + 1
        else: 
            r = m
    return l
